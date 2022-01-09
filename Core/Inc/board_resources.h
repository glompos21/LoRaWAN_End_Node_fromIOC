/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    board_resources.h
  * @author  MCD Application Team
  * @brief   Header for driver at.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
#ifndef BOARD_RESOURCE_H
#define BOARD_RESOURCE_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include "utilities_conf.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/**
  * @brief Led enumeration
  */
typedef enum
{
  SYS_LED3 = 0,
  SYS_LED2 = 1,
  SYS_LED1 = 2,
  /* Color SYS_LED aliases */
  SYS_LED_BLUE  = SYS_LED3,
  SYS_LED_GREEN = SYS_LED2,
  SYS_LED_RED   = SYS_LED1,
} Sys_Led_TypeDef;

/**
  * @brief Button mode enumeration
  */
typedef enum
{
  SYS_BUTTON_MODE_GPIO = 0,
  SYS_BUTTON_MODE_EXTI = 1
} Sys_ButtonMode_TypeDef;

/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/**
  * @brief Number of leds
  */
#define SYS_LEDn                                     3U

/**  Definition for BSP USER LED 3  **/
/**
  * @brief Pin of Led3
  */
#define SYS_LED3_PIN                                GPIO_PIN_11
/**
  * @brief Port of Led3
  */
#define SYS_LED3_GPIO_PORT                          GPIOB
/**
  * @brief Enable GPIOs clock of Led3
  */
#define SYS_LED3_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOB_CLK_ENABLE()
/**
  * @brief Disable GPIOs clock of Led3
  */
#define SYS_LED3_GPIO_CLK_DISABLE()                 __HAL_RCC_GPIOB_CLK_DISABLE()

/**  Definition for BSP USER LED 2  **/
/**
  * @brief Pin of Led2
  */
#define SYS_LED2_PIN                                GPIO_PIN_9
/**
  * @brief Port of Led2
  */
#define SYS_LED2_GPIO_PORT                          GPIOB
/**
  * @brief Enable GPIOs clock of Led2
  */
#define SYS_LED2_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOB_CLK_ENABLE()
/**
  * @brief Disable GPIOs clock of Led2
  */
#define SYS_LED2_GPIO_CLK_DISABLE()                 __HAL_RCC_GPIOB_CLK_DISABLE()

/**  Definition for BSP USER LED 1  **/
/**
  * @brief Pin of Led1
  */
#define SYS_LED1_PIN                                GPIO_PIN_15
/**
  * @brief Port of Led1
  */
#define SYS_LED1_GPIO_PORT                          GPIOB
/**
  * @brief Enable GPIOs clock of Led1
  */
#define SYS_LED1_GPIO_CLK_ENABLE()                  __HAL_RCC_GPIOB_CLK_ENABLE()
/**
  * @brief Disable GPIOs clock of Led1
  */
#define SYS_LED1_GPIO_CLK_DISABLE()                 __HAL_RCC_GPIOB_CLK_DISABLE()

/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/**
  * @brief Enable all Leds clock
  */
#define SYS_LEDx_GPIO_CLK_ENABLE(__INDEX__)         __HAL_RCC_GPIOB_CLK_ENABLE() /* All SYS_LED on same port */

/**
  * @brief Disable all Leds clock
  */
#define SYS_LEDx_GPIO_CLK_DISABLE(__INDEX__)        __HAL_RCC_GPIOB_CLK_DISABLE() /* All SYS_LED off same port */

/**
  * @brief Enable all Buttons clock
  */
#define SYS_BUTTONx_GPIO_CLK_ENABLE(__INDEX__)    do { } while(0)

/**
  * @brief Disable all Buttons clock
  */
#define SYS_BUTTONx_GPIO_CLK_DISABLE(__INDEX__)    do { } while(0)

/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported variables ---------------------------------------------------------*/
/* USER CODE BEGIN EV */

/* USER CODE END EV */

/* Exported functions prototypes ---------------------------------------------*/
/** @defgroup STM32WLXX_NUCLEO_LOW_LEVEL_LED_Functions  LOW LEVEL LED Functions
  * @{
  */
/**
  * @brief  Configures SYS_LED GPIO.
  * @param  SYS_LED to be configured
  *         This parameter can be one of the following values:
  *            @arg SYS_LED3
  *            @arg SYS_LED2
  *            @arg SYS_LED1
  * @return BSP status
  */
int32_t          SYS_LED_Init(Sys_Led_TypeDef SYS_LED);

/**
  * @brief  DeInit SYS_LEDs.
  * @param  SYS_LED to be de-init
  *         This parameter can be one of the following values:
  *            @arg SYS_LED3
  *            @arg SYS_LED2
  *            @arg SYS_LED1
  * @note Led DeInit does not disable the GPIO clock nor disable the Mfx
  * @return BSP status
  */
int32_t          SYS_LED_DeInit(Sys_Led_TypeDef SYS_LED);

/**
  * @brief  Turns selected SYS_LED On.
  * @param  SYS_LED Specifies the Led to be set on
  *         This parameter can be one of the following values:
  *            @arg SYS_LED3
  *            @arg SYS_LED2
  *            @arg SYS_LED1
  * @return BSP status
  */
int32_t          SYS_LED_On(Sys_Led_TypeDef SYS_LED);

/**
  * @brief  Turns selected SYS_LED Off.
  * @param  SYS_LED Specifies the Led to be set off
  *         This parameter can be one of the following values:
  *            @arg SYS_LED3
  *            @arg SYS_LED2
  *            @arg SYS_LED1
  * @return BSP status
  */
int32_t          SYS_LED_Off(Sys_Led_TypeDef SYS_LED);

/**
  * @brief  Toggles the selected SYS_LED.
  * @param  SYS_LED Specifies the Led to be toggled
  *         This parameter can be one of the following values:
  *            @arg SYS_LED3
  *            @arg SYS_LED2
  *            @arg SYS_LED1
  * @return BSP status
  */
int32_t          SYS_LED_Toggle(Sys_Led_TypeDef SYS_LED);

/**
  * @brief  Get the status of the selected SYS_LED.
  * @param  SYS_LED Specifies the Led to get its state
  *         This parameter can be one of following parameters:
  *            @arg SYS_LED3
  *            @arg SYS_LED2
  *            @arg SYS_LED1
  * @return SYS_LED status
  */
int32_t          SYS_LED_GetState(Sys_Led_TypeDef SYS_LED);
/**
  * @}
  */

/** @defgroup STM32WLXX_NUCLEO_LOW_LEVEL_BUTTON_Functions  LOW LEVEL BUTTON Functions
  * @{
  */
/**
  * @brief  Configures Button GPIO and EXTI Line.
  * @param  Button Specifies the Button to be configured
  *         This parameter can be one of following parameters:
  * @param  ButtonMode Specifies Button mode
  *   This parameter can be one of following parameters:
  *     @arg SYS_BUTTON_MODE_GPIO: Button will be used as simple IO
  *     @arg SYS_BUTTON_MODE_EXTI: Button will be connected to EXTI line with interrupt
  *                            generation capability
  * @return BSP status
  */
int32_t          SYS_PB_Init(Sys_Button_TypeDef Button, Sys_ButtonMode_TypeDef ButtonMode);

/**
  * @brief  Push Button DeInit.
  * @param  Button Button to be configured
  *         This parameter can be one of following parameters:
  * @note PB DeInit does not disable the GPIO clock
  * @return BSP status
  */
int32_t          SYS_PB_DeInit(Sys_Button_TypeDef Button);

/**
  * @brief  Returns the selected Button state.
  * @param  Button Specifies the Button to be checked
  *         This parameter can be one of following parameters:
  * @return The Button GPIO pin value.
  */
int32_t          SYS_PB_GetState(Sys_Button_TypeDef Button);

/**
  * @brief  This function handles Push-Button interrupt requests.
  * @param  Button Specifies the pin connected EXTI line
  */
void             SYS_PB_IRQHandler(Sys_Button_TypeDef Button);

/**
  * @}
  */

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

#ifdef __cplusplus
}
#endif

#endif /* BOARD_RESOURCE_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
