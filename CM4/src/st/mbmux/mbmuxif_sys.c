
/**
  ******************************************************************************
  * @file    mbmuxif_sys.c
  * @author  MCD Application Team
  * @brief   allows CM4 application to handle the SYSTEM MBMUX channel.
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


/* Includes ------------------------------------------------------------------*/

#include "mbmuxif_sys.h"
//#include "stm32_mem.h"
//#include "cmsis_os.h"
//#include "stm32_timer.h"
#include "sys_app.h"
#include "msg_id.h"
//#include "utilities_def.h"


/* Private variables ---------------------------------------------------------*/
static FLASH_OBProgramInitTypeDef OptionsBytesStruct;
static __IO uint8_t AllowSequencerForSysCmd = 0;
static __IO uint8_t MbSystemRespRcvFlag;

UTIL_MEM_PLACE_IN_SECTION("MAPPING_TABLE") static  MBMUX_ComTable_t MBSYS_RefTable UTIL_MEM_ALIGN(16) ;

MBMUX_ComTable_t *pMb_RefTable = &MBSYS_RefTable;
MBMUX_ComParam_t *SystemComObj;

__attribute__((section ("MB_MEM1"))) uint32_t aSystemCmdRespBuff[MAX_PARAM_OF_SYS_CMD_FUNCTIONS];/*shared*/
__attribute__((section ("MB_MEM1"))) uint32_t aSystemNotifAckBuff[MAX_PARAM_OF_SYS_NOTIF_FUNCTIONS];/*shared*/
__attribute__((section ("MB_MEM1"))) uint32_t aSystemPrioACmdRespBuff[MAX_PARAM_OF_SYS_PRIOA_CMD_FUNCTIONS];/*shared*/
__attribute__((section ("MB_MEM1"))) uint32_t aSystemPrioANotifAckBuff[MAX_PARAM_OF_SYS_PRIOA_NOTIF_FUNCTIONS];/*shared*/
__attribute__((section ("MB_MEM1"))) uint32_t aSystemPrioBCmdRespBuff[MAX_PARAM_OF_SYS_PRIOB_CMD_FUNCTIONS];/*shared*/
__attribute__((section ("MB_MEM1"))) uint32_t aSystemPrioBNotifAckBuff[MAX_PARAM_OF_SYS_PRIOB_NOTIF_FUNCTIONS];/*shared*/

static osSemaphoreId_t Sem_MbSystemRespRcv;

osThreadId_t Thd_SysNotifRcvProcessId;

const osThreadAttr_t Thd_SysNotifRcvProcess_attr =
{
  .name = CFG_MB_SYS_PROCESS_NAME,
  .attr_bits = CFG_MB_SYS_PROCESS_ATTR_BITS,
  .cb_mem = CFG_MB_SYS_PROCESS_CB_MEM,
  .cb_size = CFG_MB_SYS_PROCESS_CB_SIZE,
  .stack_mem = CFG_MB_SYS_PROCESS_STACK_MEM,
  .priority = CFG_MB_SYS_PROCESS_PRIORITY,
  .stack_size = CFG_MB_SYS_PROCESS_STACk_SIZE
};
static void Thd_SysNotifRcvProcess(void *argument);

/* Private function prototypes -----------------------------------------------*/
/**
  * @brief  SYSTEM response callbacks: set event to release waiting task
  * @param  ComObj pointer to the SYSTEM com param buffer
  */
static void MBMUXIF_IsrSystemRespRcvCb(void *ComObj);

/**
  * @brief  SYSTEM notification callbacks: schedules a task in order to quit the ISR
  * @param  ComObj pointer to the SYSTEM com param buffer
  */
static void MBMUXIF_IsrSystemNotifRcvCb(void *ComObj);

/**
  * @brief  SYSTEM task to process the notification
  */
static void MBMUXIF_TaskSystemNotifRcv(void);

/**
  * @brief  SYSTEM PRIO_A response callbacks: available for new usage
  * @param  ComObj pointer to the SYSTEM com param buffer
  */
static void MBMUXIF_IsrSystemPrioARespRcvCb(void *ComObj);

/**
  * @brief  SYSTEM PRIO_A notification callbacks: used by RTC
  * @param  ComObj pointer to the SYSTEM com param buffer
  */
static void MBMUXIF_IsrSystemPrioANotifRcvCb(void *ComObj);

/**
  * @brief  SYSTEM PRIO_B response callbacks: available for new usage
  * @param  ComObj pointer to the SYSTEM com param buffer
  */
static void MBMUXIF_IsrSystemPrioBRespRcvCb(void *ComObj);

/**
  * @brief  SYSTEM PRIO_B notification callbacks: available for new usage
  * @param  ComObj pointer to the SYSTEM com param buffer
  */
static void MBMUXIF_IsrSystemPrioBNotifRcvCb(void *ComObj);

/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Exported functions --------------------------------------------------------*/
int8_t MBMUXIF_SystemInit(void)
{
  int8_t ret;
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};

  /* Get Chip Revision Identifier (cut) */
  MBSYS_RefTable.ChipRevId = LL_DBGMCU_GetRevisionID();
  /* Get the Dual boot configuration status */
  HAL_FLASHEx_OBGetConfig(&OptionsBytesStruct);

  if (OptionsBytesStruct.IPCCdataBufAddr != (uint32_t) pMb_RefTable)
  {
    /*APP_PPRINTF("There is a difference between the MAPPING_TABLE placement in memory: 0x%X \r\n", (uint32_t) pMb_RefTable);
    APP_PPRINTF("and the address calculated according to the IPCCDBA option byte: 0x%X \r\n",
                OptionsBytesStruct.IPCCdataBufAddr);
    APP_PPRINTF("IPCCDBA is automatically updated\n\rSystem restarting...\r\n\r\n");
    APP_PPRINTF("Please check the CM4\\MbMux\\mbmuxif_sys.c for more info \r\n\r\n");*/

    /* Next code reprograms the IPCCDBA option byte which automatically resets the chip. */
    /* It might be that this is not what you want. In that case check your linker file. */
    /* en.STM32CubeWL.zip example places MAPPING_TABLE in SRAM2 (specifically to 0x20008000) */
    /* due to its memory retention properties requested for Low Power STANDBY mode. */
    /* This address also matches the factory default value of IPCCDBA (i.e. 0x800) */
    /* In fact IPCCdataBufAddr = RAM_BASE_ADDR + IPCCDBA<<0x800 is 0x20008000. */
    /* On the other hand STM32CubeMX generates standard linker files which don't define MAPPING_TABLE */
    /* You can get inspired for your linker file by the ones in the Repository at the correspondent Apps: */
    /*    C:\Users\<username>\STM32Cube\Repository\STM32Cube_FW_WL_V1.0.0\Projects\<board>\Applications\... */
    /* When using "repository linker file" next code is not supposed to be executed */

    if (MBSYS_RefTable.ChipRevId == 0x1001)
    {
      /* w.a. for cut 1.1 : problems to write on FLASH when MSI clock with frq > 16Mhz*/
      HAL_RCC_GetOscConfig(&RCC_OscInitStruct);
      RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_8;
      if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
      {
    	  __BKPT(0);
        //Error_Handler();
      }
    }

    /* write FLASH->IPCCBR option byte */
    /* Unlock the Flash to enable the flash control register access *************/
    HAL_FLASH_Unlock();
    /* Clear OPTVERR bit set on virgin samples */
    __HAL_FLASH_CLEAR_FLAG(FLASH_FLAG_OPTVERR);

    /* Unlock the Options Bytes *************************************************/
    HAL_FLASH_OB_Unlock();

    /*Write IPCCDBA Option Byte based on (FLASH_IPCC_data_buffer - SRAM1_BASE) >> 4*/
    OptionsBytesStruct.OptionType = OPTIONBYTE_IPCC_BUF_ADDR;
    OptionsBytesStruct.IPCCdataBufAddr = (uint32_t) pMb_RefTable;

    if (HAL_FLASHEx_OBProgram(&OptionsBytesStruct) != HAL_OK)
    {
      /*
      Error occurred while setting option bytes configuration.
      User can add here some code to deal with this error.
      To know the code error, user can call function 'HAL_FLASH_GetError()'
      */
      //Error_Handler();
    	__BKPT(0);
    }

    /* Start the Option Bytes programming process */
    if (HAL_FLASH_OB_Launch() != HAL_OK)
    {
      /*
      Error occurred while reloading option bytes configuration.
      User can add here some code to deal with this error.
      To know the code error, user can call function 'HAL_FLASH_GetError()'
      */
      //Error_Handler();
    	__BKPT(0);
    }

    /* Notice: After HAL_FLASH_OB_Launch() the chip is reset so next code is not executed */
    /* Implemented anyway to be aligned with other projects (SBSFU, etc) */
    /* Lock the Options Bytes ***************************************************/
    (void) HAL_FLASH_OB_Lock();
    /* Lock the Flash to disable the flash control register access  *********/
    (void) HAL_FLASH_Lock();
  }
  Sem_MbSystemRespRcv = osSemaphoreNew(1, 0, NULL);   /*< Create the semaphore and make it busy at initialization */

  /* Init MailBoxMultiplexer */
  MBMUX_Init(pMb_RefTable);

  ret = MBMUX_RegisterFeature(FEAT_INFO_SYSTEM_ID, MBMUX_CMD_RESP, MBMUXIF_IsrSystemRespRcvCb, aSystemCmdRespBuff, sizeof(aSystemCmdRespBuff));
  if (ret >= 0)
  {
    ret = MBMUX_RegisterFeature(FEAT_INFO_SYSTEM_ID, MBMUX_NOTIF_ACK, MBMUXIF_IsrSystemNotifRcvCb, aSystemNotifAckBuff, sizeof(aSystemNotifAckBuff));
  }
  if (ret >= 0)
  {
    ret = 0;
    Thd_SysNotifRcvProcessId = osThreadNew(Thd_SysNotifRcvProcess, NULL, &Thd_SysNotifRcvProcess_attr);
  }

  /* hold Cm0 from executing MBMUXIF_SystemInit after booting (after PWR_CR4_C2BOOT is set by Cm4)*/
  /* it allows Cm0 debugging step by step its own MBMUXIF_SystemInit */
  MBMUXIF_SetCpusSynchroFlag(CPUS_BOOT_SYNC_PREVENT_CPU2_TO_START);
  return ret;
}

int8_t MBMUXIF_SystemPrio_Add(FEAT_INFO_IdTypeDef SystemPrioFeat)
{
  int8_t ret = 0;

  switch (SystemPrioFeat)
  {
    case FEAT_INFO_SYSTEM_CMD_PRIO_A_ID:
    {
      ret = MBMUX_RegisterFeature(SystemPrioFeat, MBMUX_CMD_RESP, MBMUXIF_IsrSystemPrioARespRcvCb, aSystemPrioACmdRespBuff, sizeof(aSystemPrioACmdRespBuff));
      break;
    }
    case FEAT_INFO_SYSTEM_NOTIF_PRIO_A_ID:
    {
      ret = MBMUX_RegisterFeature(SystemPrioFeat, MBMUX_NOTIF_ACK, MBMUXIF_IsrSystemPrioANotifRcvCb, aSystemPrioANotifAckBuff, sizeof(aSystemPrioANotifAckBuff));
      break;
    }
    case FEAT_INFO_SYSTEM_CMD_PRIO_B_ID:
    {
      ret = MBMUX_RegisterFeature(SystemPrioFeat, MBMUX_CMD_RESP, MBMUXIF_IsrSystemPrioBRespRcvCb, aSystemPrioBCmdRespBuff, sizeof(aSystemPrioBCmdRespBuff));
      break;
    }
    case FEAT_INFO_SYSTEM_NOTIF_PRIO_B_ID:
    {
      ret = MBMUX_RegisterFeature(SystemPrioFeat, MBMUX_NOTIF_ACK, MBMUXIF_IsrSystemPrioBNotifRcvCb, aSystemPrioBNotifAckBuff, sizeof(aSystemPrioBNotifAckBuff));
      break;
    }
    default:
      break;
  }

  if (ret >= 0)
  {
    /* Note: trace works on ISR, no need to associate a SEQ_TASK */

    ret = MBMUXIF_SystemSendCm0plusRegistrationCmd(SystemPrioFeat);
    if (ret < 0)
    {
      ret = -3;
    }
  }
  return ret;
}

void MBMUXIF_SetCpusSynchroFlag(uint16_t flag)
{
  pMb_RefTable->SynchronizeCpusAtBoot = flag;
}

void MBMUXIF_WaitCm0MbmuxIsInitialized(void)
{
  while (pMb_RefTable->SynchronizeCpusAtBoot != CPUS_BOOT_SYNC_CPU2_INIT_COMPLETED)
  {
  }
}

MBMUX_ComParam_t *MBMUXIF_GetSystemFeatureCmdComPtr(FEAT_INFO_IdTypeDef SystemPrioFeat)
{
  MBMUX_ComParam_t *com_param_ptr = MBMUX_GetFeatureComPtr(SystemPrioFeat, MBMUX_CMD_RESP);
  if (com_param_ptr == NULL)
  {
    //Error_Handler(); /* feature isn't registered */
	  __BKPT(0);
  }
  return com_param_ptr;
}

void MBMUXIF_SystemAllowSequencerForSysCmd(void)
{
  AllowSequencerForSysCmd = 1;
}

void MBMUXIF_SystemSendCmd(FEAT_INFO_IdTypeDef SystemPrioFeat)
{
  if (SystemPrioFeat == FEAT_INFO_SYSTEM_ID)
  {

    MbSystemRespRcvFlag = 0;  /* To avoid using Sequencer during Init sequence for SysCmd  */
    if (MBMUX_CommandSnd(FEAT_INFO_SYSTEM_ID) == 0)
    {
      if (AllowSequencerForSysCmd)
      {
        osSemaphoreAcquire(Sem_MbSystemRespRcv, osWaitForever);
      }
      else
      {
        /* To avoid using Sequencer (& LowPower) during Init sequence for SysCmd  */
        while (!MbSystemRespRcvFlag) {}
      }
    }
    else
    {
      Error_Handler();
    }
  }
  else
  {
  }

}

void MBMUXIF_SystemSendAck(FEAT_INFO_IdTypeDef SystemPrioFeat)
{

  if (MBMUX_AcknowledgeSnd(SystemPrioFeat) != 0)
  {
    //Error_Handler();
	  __BKPT(0);
  }
}

/* Exported services --------------------------------------------------------*/
FEAT_INFO_List_t *MBMUXIF_SystemSendCm0plusInfoListReq(void)
{
  MBMUX_ComParam_t *com_obj;
  uint32_t ret = 0;

  com_obj = MBMUXIF_GetSystemFeatureCmdComPtr(FEAT_INFO_SYSTEM_ID);
  if (com_obj != NULL)
  {
    com_obj->MsgId = SYS_GET_INFO_LIST_MSG_ID;
    com_obj->ParamCnt = 0;
    MBMUXIF_SystemSendCmd(FEAT_INFO_SYSTEM_ID);
    /* waiting for ack event */

    /* once event is received and semaphore released: */
    ret = com_obj->ReturnVal;
  }
  return (FEAT_INFO_List_t *) ret;   /* need to verify */
}

FEAT_INFO_Param_t *MBMUXIF_SystemGetFeatCapabInfoPtr(FEAT_INFO_IdTypeDef e_featID)
{
  FEAT_INFO_List_t *p_cm0plus_supported_features_list = NULL;
  FEAT_INFO_Param_t  *p_feature = NULL;
  uint8_t i;
  uint8_t cm0plus_nr_of_supported_features;
  uint8_t found = 0;

  p_cm0plus_supported_features_list = MBMUXIF_SystemSendCm0plusInfoListReq();

  if (p_cm0plus_supported_features_list != NULL)
  {
    cm0plus_nr_of_supported_features = p_cm0plus_supported_features_list->Feat_Info_Cnt;

    for (i = 0; i < cm0plus_nr_of_supported_features;  i++)
    {
      p_feature = i + p_cm0plus_supported_features_list->Feat_Info_TableAddress;
      if (p_feature->Feat_Info_Feature_Id == e_featID)
      {
        found = 1;
        break;
      }
    }
  }

  if (!found)
  {
    //Error_Handler();
	  __BKPT(0);
  }
  return  p_feature;
}

int8_t MBMUXIF_SystemSendCm0plusRegistrationCmd(FEAT_INFO_IdTypeDef e_featID)
{
  MBMUX_ComParam_t *com_obj;
  uint32_t ret = 0;
  uint32_t *com_buffer ;
  uint16_t i = 0;

  com_obj = MBMUXIF_GetSystemFeatureCmdComPtr(FEAT_INFO_SYSTEM_ID);
  if (com_obj != NULL)
  {
    com_obj->MsgId = SYS_REGISTER_FEATURE_MSG_ID;
    com_buffer = com_obj->ParamBuf;
    com_buffer[i++] = (uint32_t) e_featID;
    com_obj->ParamCnt = i;
    MBMUXIF_SystemSendCmd(FEAT_INFO_SYSTEM_ID);
    /* waiting for event */
    /* once event is received and semaphore released: */
    ret = com_obj->ReturnVal;
  }
  return (int8_t) ret;
}

/* Private functions ---------------------------------------------------------*/
static void MBMUXIF_IsrSystemRespRcvCb(void *ComObj)
{
  /* During "SystemInit sequence" Flag is used instead of Sequencer */
  MbSystemRespRcvFlag = 1;
  if (AllowSequencerForSysCmd) /* To avoid using Sequencer during Init sequence */
  {
    osSemaphoreRelease(Sem_MbSystemRespRcv);
  }
}

static void MBMUXIF_IsrSystemNotifRcvCb(void *ComObj)
{
  SystemComObj = (MBMUX_ComParam_t *) ComObj;
  osThreadFlagsSet(Thd_SysNotifRcvProcessId, 1);
}

static void Thd_SysNotifRcvProcess(void *argument)
{
  UNUSED(argument);
  for (;;)
  {
    osThreadFlagsWait(1, osFlagsWaitAny, osWaitForever);
    MBMUXIF_TaskSystemNotifRcv();  /*what you want to do*/
  }
}

static void MBMUXIF_TaskSystemNotifRcv(void)
{
  Process_Sys_Notif(SystemComObj);
}

static void MBMUXIF_IsrSystemPrioARespRcvCb(void *ComObj)
{
}

static void MBMUXIF_IsrSystemPrioANotifRcvCb(void *ComObj)
{
  UTIL_TIMER_IRQ_Handler();
  /* clear the IPCC flag (necessary even if this Notif is not blocking */
  MBMUXIF_SystemSendAck(FEAT_INFO_SYSTEM_NOTIF_PRIO_A_ID);
}

static void MBMUXIF_IsrSystemPrioBRespRcvCb(void *ComObj)
{
}

static void MBMUXIF_IsrSystemPrioBNotifRcvCb(void *ComObj)
{
}


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
