/*
 * GPIO.c
 *
 *  Created on: Oct 25, 2023
 *      Author: alper
 */

#include "GPIO.h"


/**
  * @brief  Sets or resets the pin on the GPIx port.
  * @param  Which GPIOx port has the pin to be written on.
  * @param  Set to be pin number GPIO_PinNumber.
  * @param  Enable Or Disable PinState.
  *
  * @retval None
  */

void GPIO_Pin_Write(GPIO_TypDef_t *GPIOx, uint16_t GPIO_PinNumber, GPIO_PinTypeDef_t PinState)
{
	if(PinState == GPIO_PIN_ENABLE)
	{
		GPIOx->BSRR |= GPIO_PinNumber;
	}
	else
	{
		GPIOx->BSRR |= (GPIO_PinNumber << 16u);
	}
}

