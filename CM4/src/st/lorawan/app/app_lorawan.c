/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    app_lorawan.c
  * @author  MCD Application Team
  * @brief   Application of the LRWAN Middleware
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
#include "app_lorawan.h"
#include "lora_app.h"
//#include "sys_app.h"


void MX_LoRaWAN_Init(void)
{
  SystemApp_Init();

  LoRaWAN_Init();
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
