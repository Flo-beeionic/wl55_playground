/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    LmHandler_mbwrapper.h
  * @author  MCD Application Team
  * @brief   This file implements the CM4 side wrapper of the LmHandler
  *          interface shared between M0 and M4.
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __LMHANDLER_MBWRAPPER_CM4_H__
#define __LMHANDLER_MBWRAPPER_CM4_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "mbmux_table.h"


/* Exported functions prototypes ---------------------------------------------*/
/**
  * @brief  This function processes the LmHandler events callbacks from CM0+
  * @param  ComObj exchange buffer parameter
  */
void Process_Lora_Notif(MBMUX_ComParam_t *ComObj);

#ifdef __cplusplus
}
#endif

#endif /*__LMHANDLER_MBWRAPPER_CM4_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/