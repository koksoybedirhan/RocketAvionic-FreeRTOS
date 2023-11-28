/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Optional_ADC_Pin GPIO_PIN_1
#define Optional_ADC_GPIO_Port GPIOA
#define Lora_NSS_Pin GPIO_PIN_4
#define Lora_NSS_GPIO_Port GPIOA
#define Lora_DIO0_Pin GPIO_PIN_0
#define Lora_DIO0_GPIO_Port GPIOB
#define Lora_RESET_Pin GPIO_PIN_1
#define Lora_RESET_GPIO_Port GPIOB
#define First_Seperation_Pin GPIO_PIN_12
#define First_Seperation_GPIO_Port GPIOB
#define Second_Seperation_Pin GPIO_PIN_13
#define Second_Seperation_GPIO_Port GPIOB
#define Optional_LED_Pin GPIO_PIN_14
#define Optional_LED_GPIO_Port GPIOB
#define Optional_OUT2_Pin GPIO_PIN_15
#define Optional_OUT2_GPIO_Port GPIOB
#define Optional_PWM_Pin GPIO_PIN_8
#define Optional_PWM_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_11
#define BUZZER_GPIO_Port GPIOA
#define Optional_EXTI_Pin GPIO_PIN_12
#define Optional_EXTI_GPIO_Port GPIOA
#define SECSEP_LED_Pin GPIO_PIN_4
#define SECSEP_LED_GPIO_Port GPIOB
#define FIRSTSEP_LED_Pin GPIO_PIN_5
#define FIRSTSEP_LED_GPIO_Port GPIOB
#define Optional_IN_Pin GPIO_PIN_8
#define Optional_IN_GPIO_Port GPIOB
#define Optional_OUT_Pin GPIO_PIN_9
#define Optional_OUT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
