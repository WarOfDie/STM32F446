/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
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


#include "RCC.h"
#include "GPIO.h"
#include <string.h>

void ledInit(void);
void delay(int i);

int main(void)
{
	ledInit();
	while(1)
	{
		if(GPIO_Pin_Read(GPIOC, GPIO_PIN_13) == GPIO_PIN_DISABLE)
		{
			GPIO_Toggle_Pin(GPIOA, GPIO_PIN_5);
		}


	}


}
void ledInit(void)
{
	RCC_GPIOA_CLK_ENB();
	RCC_GPIOC_CLK_ENB();

	GPIO_InitTypeDef_t config;
	config.Mode = GPIO_MODE_OUTPUT;
	config.Otype = GPIO_OTYPE_PP;
	config.Speed = GPIO_SPEED_LSPEED;
	config.PuPD = 0;
	GPIO_Init(GPIOA, GPIO_PIN_5, &config);

	memset(&config, 0 , sizeof(config));
	config.Mode = GPIO_MODE_INPUT;
	config.PuPD = GPIO_PUPDR_PULLUP;
	GPIO_Init(GPIOC, GPIO_PIN_13, &config);

}
void delay(int i)
{
	while(i--);
}
