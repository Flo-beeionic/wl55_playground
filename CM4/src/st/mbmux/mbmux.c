/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    mbmux.c
  * @author  MCD Application Team
  * @brief   CM4 side multiplexer to map features to IPCC channels
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "stdint.h"
#include "assert.h"
#include "stddef.h"
//#include "stm32_mem.h"
#include "../core/ipcc_if.h"
#include "mbmux.h"


/* Private define ------------------------------------------------------------*/
#define MB_CHANNEL_NOT_REGISTERED 0xFF

/* Private variables ---------------------------------------------------------*/
static MBMUX_ComTable_t *p_MBMUX_ComTable;
static FEAT_INFO_List_t *p_MBMUX_Cm0plusFeatureList = NULL;


/* Private function prototypes -----------------------------------------------*/
/**
  * @brief   Check if the FEATURE is in the CM0 table and return it's position
  * @param   e_featID  identifier of the feature
  * @retval  0 not present, 1 present
  */
static uint8_t MBMUX_CheckIfFeatureSupportedByCm0plus(FEAT_INFO_IdTypeDef e_featID);

/**
  * @brief   Isr executed when Ipcc receive IRQ notification: forwards to upper layer
  * @param   channelIdx ipcc channel number
  */
static void MBMUX_IsrResponseRcvCb(uint32_t channelIdx);

/**
  * @brief   Isr executed when Ipcc receive IRQ notification: forwards to upper layer
  * @param   channelIdx  ipcc channel number
  */
static void MBMUX_IsrNotificationRcvCb(uint32_t channelIdx);

/**
  * @brief   Find the first channel not yet associated to a feature (available)
  * @param   ComType  0 for CMd/Resp (TX), 1 for Notif/Ack (RX)
  * @retval  ipcc channel number: if 0xFF means no channel available
  */
static uint8_t MBMUX_FindChStillUnregistered(MBMUX_ComType_t ComType);

/**
  * @brief   gives back channel associated to the feature
  * @param   e_featID  identifier of the feature (Lora, Sigfox, etc).
  * @param   ComType  0 for CMd/Resp (TX), 1 for Notif/Ack (RX)
  * @retval  ipcc channel number: if 0xFF means the feature isn't registered
  */
static uint8_t MBMUX_GetFeatureChIdx(FEAT_INFO_IdTypeDef e_featID, MBMUX_ComType_t ComType);

/**
  * @brief   To facilitate the debug in case a function is not registered
  * @param   ComObj Dummy
  */
static void MBMUX_IsrNotRegistered(void *ComObj);

/* Exported functions --------------------------------------------------------*/
void MBMUX_Init(MBMUX_ComTable_t *const pMBMUX_ComTable)
{
  uint8_t i;
  IPCC_IF_Init(MBMUX_IsrResponseRcvCb, MBMUX_IsrNotificationRcvCb);

  p_MBMUX_ComTable = pMBMUX_ComTable;

  for (i = 0; i < FEAT_INFO_CNT; i++)
  {
    p_MBMUX_ComTable->MBMUXMapping[i][MBMUX_CMD_RESP] = MB_CHANNEL_NOT_REGISTERED;
    p_MBMUX_ComTable->MBMUXMapping[i][MBMUX_NOTIF_ACK] = MB_CHANNEL_NOT_REGISTERED;
  }

  for (i = 0; i < MBMUX_CHANNEL_NUMBER; i++)
  {
    p_MBMUX_ComTable->MBCmdRespParam[i].MsgId = 0;
    p_MBMUX_ComTable->MBCmdRespParam[i].MsgCm4Cb = MBMUX_IsrNotRegistered;
    p_MBMUX_ComTable->MBCmdRespParam[i].ParamCnt = 0;
    p_MBMUX_ComTable->MBCmdRespParam[i].ParamBuf = NULL;
    p_MBMUX_ComTable->MBNotifAckParam[i].MsgId = 0;
    p_MBMUX_ComTable->MBNotifAckParam[i].MsgCm4Cb = MBMUX_IsrNotRegistered;
    p_MBMUX_ComTable->MBNotifAckParam[i].ParamCnt = 0;
    p_MBMUX_ComTable->MBNotifAckParam[i].ParamBuf = NULL;
  }
}

void MBMUX_SetCm0plusFeatureListPtr(FEAT_INFO_List_t *pCM0PLUS_FeatureList)
{
  p_MBMUX_Cm0plusFeatureList = pCM0PLUS_FeatureList;
}

int8_t MBMUX_RegisterFeature(FEAT_INFO_IdTypeDef e_featID, MBMUX_ComType_t ComType, void (*MsgCb)(void *ComObj), uint32_t *const ComBuffer, uint16_t ComBufSize)
{
  int8_t check_if_feature_provided_by_cm0plus = 0;
  uint8_t channel_idx = MB_CHANNEL_NOT_REGISTERED;
  int8_t ret = -1; /* no more ipcc channels available */
  uint8_t check_existing_feature_registration;

  if (e_featID == FEAT_INFO_SYSTEM_ID)
  {
    check_if_feature_provided_by_cm0plus = 1;
  }
  else
  {
    check_if_feature_provided_by_cm0plus = MBMUX_CheckIfFeatureSupportedByCm0plus(e_featID);
  }

  if (check_if_feature_provided_by_cm0plus == 1)
  {
    check_existing_feature_registration = MBMUX_GetFeatureChIdx(e_featID, ComType);

    if (check_existing_feature_registration == MB_CHANNEL_NOT_REGISTERED)
    {
      if (e_featID == FEAT_INFO_SYSTEM_ID)
      {
        channel_idx = 0;
      }
      else
      {
        channel_idx = MBMUX_FindChStillUnregistered(ComType);
      }
    }
    else
    {
      /* previous registration will be replaced by the given buffers */
      channel_idx = check_existing_feature_registration;
    }
  }
  else
  {
    ret = -2; /* feature not provided by CM0PLUS */
  }

  if (channel_idx != MB_CHANNEL_NOT_REGISTERED)
  {
    if (ComType == MBMUX_CMD_RESP)
    {
      p_MBMUX_ComTable->MBMUXMapping[e_featID][MBMUX_CMD_RESP] = channel_idx;
      p_MBMUX_ComTable->MBCmdRespParam[channel_idx].MsgCm4Cb = MsgCb;
      p_MBMUX_ComTable->MBCmdRespParam[channel_idx].BufSize = ComBufSize;
      p_MBMUX_ComTable->MBCmdRespParam[channel_idx].ParamBuf = ComBuffer;
      p_MBMUX_ComTable->MBCmdRespParam[channel_idx].ReturnVal = 0;
    }
    else
    {
      p_MBMUX_ComTable->MBMUXMapping[e_featID][MBMUX_NOTIF_ACK] = channel_idx;
      p_MBMUX_ComTable->MBNotifAckParam[channel_idx].MsgCm4Cb = MsgCb;
      p_MBMUX_ComTable->MBNotifAckParam[channel_idx].BufSize = ComBufSize;
      p_MBMUX_ComTable->MBNotifAckParam[channel_idx].ParamBuf = ComBuffer;
      p_MBMUX_ComTable->MBNotifAckParam[channel_idx].ReturnVal = 0;
    }
    ret = channel_idx;
  }
  return ret;
}

void MBMUX_UnregisterFeature(FEAT_INFO_IdTypeDef e_featID, MBMUX_ComType_t ComType)
{
  uint8_t mb_ch;

  mb_ch = MBMUX_GetFeatureChIdx(e_featID, ComType);

  /* Function not completely implemented:
     Missing code that sends via Mbmux a SysCmd to tell CM0PLUS to unregister it's callback */
  /* ... */

  if (mb_ch < MBMUX_CHANNEL_NUMBER)
  {
    if (ComType == MBMUX_CMD_RESP)
    {
      /* Channel should have been unregistered first on CM0PLUS to avoid getting Irq with no cb */
      p_MBMUX_ComTable->MBCmdRespParam[mb_ch].MsgCm4Cb = MBMUX_IsrNotRegistered;
      p_MBMUX_ComTable->MBCmdRespParam[mb_ch].BufSize = 0;
      p_MBMUX_ComTable->MBCmdRespParam[mb_ch].ParamBuf = NULL;
      p_MBMUX_ComTable->MBCmdRespParam[mb_ch].ReturnVal = 0;
    }
    else
    {
      /* Make sure to clear pending IRQ Notification before un-registering the callback */
      /* necessary because the HAL_cb only mask the register, the SR is cleaned by the task */
      /* if the mask is removed by anyone, the unwished IRQ is generated if SR isn't cleaned */
      IPCC_IF_AcknowledgeSnd(mb_ch);

      p_MBMUX_ComTable->MBNotifAckParam[mb_ch].MsgCm4Cb = MBMUX_IsrNotRegistered;
      p_MBMUX_ComTable->MBNotifAckParam[mb_ch].BufSize = 0;
      p_MBMUX_ComTable->MBNotifAckParam[mb_ch].ParamBuf = NULL;
      p_MBMUX_ComTable->MBNotifAckParam[mb_ch].ReturnVal = 0;
    }
  }

  p_MBMUX_ComTable->MBMUXMapping[e_featID][ComType] = MB_CHANNEL_NOT_REGISTERED;
}

MBMUX_ComParam_t *MBMUX_GetFeatureComPtr(FEAT_INFO_IdTypeDef e_featID, MBMUX_ComType_t ComType)
{
  uint32_t channel_idx;
  MBMUX_ComParam_t *com_param_ptr = NULL;

  channel_idx = MBMUX_GetFeatureChIdx(e_featID, ComType);
  if (channel_idx < MBMUX_CHANNEL_NUMBER)
  {
    if (ComType == MBMUX_CMD_RESP)  /* TX */
    {
      com_param_ptr = (MBMUX_ComParam_t *) &p_MBMUX_ComTable->MBCmdRespParam[channel_idx];
    }
    else
    {
      com_param_ptr = (MBMUX_ComParam_t *) &p_MBMUX_ComTable->MBNotifAckParam[channel_idx];
    }
  }
  return com_param_ptr;
}

int32_t MBMUX_CommandSnd(FEAT_INFO_IdTypeDef e_featID)
{
  uint32_t mb_ch;

  mb_ch = MBMUX_GetFeatureChIdx(e_featID, MBMUX_CMD_RESP);
  if (p_MBMUX_ComTable->MBCmdRespParam[mb_ch].ParamCnt > p_MBMUX_ComTable->MBCmdRespParam[mb_ch].BufSize)
  {
    Error_Handler();
  }
  return IPCC_IF_CommandSnd(mb_ch);
}

uint32_t MBMUX_AcknowledgeSnd(FEAT_INFO_IdTypeDef e_featID)
{
  uint32_t mb_ch;

  mb_ch = MBMUX_GetFeatureChIdx(e_featID, MBMUX_NOTIF_ACK);
  return IPCC_IF_AcknowledgeSnd(mb_ch);
}

/* Private functions ---------------------------------------------------------*/
static uint8_t MBMUX_CheckIfFeatureSupportedByCm0plus(FEAT_INFO_IdTypeDef e_featID)
{
  int8_t ret = 0;
  uint8_t i;
  uint8_t cm0plus_nr_of_supported_features;
  FEAT_INFO_Param_t  i_feature;

  if (p_MBMUX_Cm0plusFeatureList != NULL)
  {
    cm0plus_nr_of_supported_features = p_MBMUX_Cm0plusFeatureList->Feat_Info_Cnt;

    for (i = 0; i < cm0plus_nr_of_supported_features;  i++)
    {
      i_feature = *(i + p_MBMUX_Cm0plusFeatureList->Feat_Info_TableAddress);
      if (i_feature.Feat_Info_Feature_Id == e_featID)
      {
        ret = 1;
        break;
      }

    }
  }
  return ret;
}

static void MBMUX_IsrResponseRcvCb(uint32_t channelIdx)
{
  /* retrieve pointer to com params */
  void *com_obj = (void *) &p_MBMUX_ComTable->MBCmdRespParam[channelIdx];
  /* call registered callback */
  p_MBMUX_ComTable->MBCmdRespParam[channelIdx].MsgCm4Cb(com_obj);
  return;
}

static void MBMUX_IsrNotificationRcvCb(uint32_t channelIdx)
{
  /* retrieve pointer to com params */
  void *com_obj = (void *) &p_MBMUX_ComTable->MBNotifAckParam[channelIdx];
  /* call registered callback */
  p_MBMUX_ComTable->MBNotifAckParam[channelIdx].MsgCm4Cb(com_obj);
  return;
}

static uint8_t MBMUX_FindChStillUnregistered(MBMUX_ComType_t ComType)
{
  uint8_t feat_id;
  uint8_t ch;
  uint8_t already_used;

  /* First two channels are reserved to SYSTEM, TRACE and SKS */
  if (ComType == MBMUX_CMD_RESP)
  {
    for (ch = 1; ch < MBMUX_CHANNEL_NUMBER; ch++)
    {
      already_used = 0;
      for (feat_id = 0; feat_id < FEAT_INFO_CNT; feat_id++)
      {
        if (p_MBMUX_ComTable->MBMUXMapping[feat_id][MBMUX_CMD_RESP] == ch)
        {
          already_used = 1;
        }
      }
      if (already_used == 0)
      {
        break;
      }
    }
  }
  else  /* RX */
  {
    for (ch = 1; ch < MBMUX_CHANNEL_NUMBER; ch++)
    {
      already_used = 0;
      for (feat_id = 0; feat_id < FEAT_INFO_CNT; feat_id++)
      {
        if (p_MBMUX_ComTable->MBMUXMapping[feat_id][MBMUX_NOTIF_ACK] == ch)
        {
          already_used = 1;
        }
      }
      if (already_used == 0)
      {
        break;
      }
    }
  }

  if (ch == MBMUX_CHANNEL_NUMBER)
  {
    return MB_CHANNEL_NOT_REGISTERED;
  }
  else
  {
    return (ch);
  }
}

static uint8_t MBMUX_GetFeatureChIdx(FEAT_INFO_IdTypeDef e_featID, MBMUX_ComType_t ComType)
{
  return p_MBMUX_ComTable->MBMUXMapping[e_featID][ComType];
}

static void MBMUX_IsrNotRegistered(void *ComObj)
{
  //Error_Handler();
	__BKPT(0);
}
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
