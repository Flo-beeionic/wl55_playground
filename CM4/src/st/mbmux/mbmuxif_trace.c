/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    mbmuxif_trace.c
  * @author  MCD Application Team
  * @brief   allows CM4 application to receive by CM0 TRACE via MBMUX
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
#include "mbmuxif_trace.h"
#include "mbmuxif_sys.h"
#include "sys_app.h"
#include "msg_id.h"
//#include "stm32_mem.h"
//#include "stm32_adv_trace.h"
/**
  * @brief trace buffer to exchange data between CM4 and CM0+
  */
__attribute__((section ("MB_MEM1"))) uint32_t aTraceNotifAckBuff[MAX_PARAM_OF_TRACE_NOTIF_FUNCTIONS];/*shared*/


/* Private function prototypes -----------------------------------------------*/
/**
  * @brief  TRACE notification callbacks: schedules a task in order to quit the ISR
  * @param  ComObj pointer to the TRACE com param buffer
  */
static void MBMUXIF_IsrTraceNotifRcvCb(void *ComObj);


/* Exported functions --------------------------------------------------------*/
int8_t MBMUXIF_TraceInit(void)
{
  int8_t ret;
  return ret;
}

void MBMUXIF_TraceSendAck(void)
{
  if (MBMUX_AcknowledgeSnd(FEAT_INFO_TRACE_ID) != 0)
  {
    //Error_Handler();
	  __BKPT(0);
  }
}
/* Private functions ---------------------------------------------------------*/
static void MBMUXIF_IsrTraceNotifRcvCb(void *ComObj)
{
  MBMUX_ComParam_t *TraceComObj;
  uint32_t  notif_ack_id;
  uint8_t *buffer;
  uint16_t bufsize;
  //UTIL_ADV_TRACE_Status_t ret;

  TraceComObj = (MBMUX_ComParam_t *) ComObj;

  notif_ack_id = TraceComObj->MsgId;

  switch (notif_ack_id)
  {
    case TRACE_SEND_MSG_ID:
      buffer = (uint8_t *) TraceComObj->ParamBuf[0];
      bufsize = (uint16_t) TraceComObj->ParamBuf[1];
      //ret = UTIL_ADV_TRACE_Send(buffer, bufsize);
      /* prepare ack buffer */
      TraceComObj->ParamCnt = 0;
      TraceComObj->ReturnVal = (uint32_t)ret;
      break;

    default:
      break;
  }

  /* Send ack */
  MBMUXIF_TraceSendAck();
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
