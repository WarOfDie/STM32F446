/*
 * GPIO.c
 *
 *  Created on: Oct 25, 2023
 *      Author: alper
 */

#include "GPIO.h"


void GPIO_Init(GPIO_TypDef_t *GPIOx, uint16_t GPIO_PinNumber, GPIO_InitTypeDef_t *GPIO_ConfInit)
{
	uint16_t position;
	uint16_t fakeValue = 0;
	uint16_t thereIs = 0;

	for(position = 0; position < 16; position++)
	{
		fakeValue = (0x1 << position);
		thereIs = (uint32_t)(fakeValue & GPIO_PinNumber);

		if(thereIs == fakeValue)
		{
			/* MODE CONFIG */
			uint32_t tempValue = GPIOx->MODER;

			tempValue &= ~(0x3U << 2*position);
			tempValue |= (GPIO_ConfInit->Mode << 2*position);

			GPIOx->MODER = tempValue;

			if((GPIO_ConfInit->Mode == GPIO_MODE_OUTPUT) || (GPIO_ConfInit->Mode == GPIO_MODE_ALTERNATE))
			{
				/*PUSH PULL, OPEN DRAIN CONFIG */

				tempValue = GPIOx->OTYPER;

				tempValue &= ~(0x1U << position);
				tempValue |= (GPIO_ConfInit->Otype << position);

				GPIOx->OTYPER = tempValue;

				/*GPIO SPEED CONFIG*/

				tempValue = GPIOx->OSPEEDER;

				tempValue &= ~(0x3U << 2*position);
				tempValue |= (GPIO_ConfInit->Speed <<2*position);

				GPIOx->OSPEEDER = tempValue;
			}
			/*GPIO PULL UP PULL DOWN CONFIG*/
			tempValue = GPIOx->PUPDR;

			tempValue &= ~(0x3U << 2*position);
			tempValue |= (GPIO_ConfInit->PuPD <<2*position);

			GPIOx->PUPDR = tempValue;
		}
	}
}
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
/**
 * @brief  Reads pin of the GPIOx port
 * @param  Which GPIOx port has the pin to be written on.
 * @param  Set to be pin number GPIO_PinNumber.
 *
 * @retval GPIO_InitTypeDef_t
 */

GPIO_PinTypeDef_t GPIO_Pin_Read(GPIO_TypDef_t *GPIOx, uint16_t GPIO_PinNumber)
{
	GPIO_PinTypeDef_t bitStatus = GPIO_PIN_DISABLE;
	if((GPIOx->IDR &= GPIO_PinNumber) != GPIO_PIN_DISABLE)
	{
		bitStatus = GPIO_PIN_ENABLE;
	}

	return bitStatus;
}

/**
 * @brief  Locks for configuration pin of the GPIOx port
 * @param  Which GPIOx port has the pin to be written on.
 * @param  Set to be pin number GPIO_PinNumber.
 *
 * @retval Void
 */
void GPIO_Lock_Pin(GPIO_TypDef_t *GPIOx, uint16_t GPIO_PinNumber)
{
	uint32_t tempValue = (0x1 << 16 ) | GPIO_PinNumber;

	GPIOx->LCKR = tempValue; 		//LCKR[16] '1' + LCKR[15:0] = DATA
	GPIOx->LCKR = GPIO_PinNumber; 	//LCKR[16] '0' + LCKR[15:0] = DATA
	GPIOx->LCKR = tempValue; 		//LCKR[16] '1' + LCKR[15:0] = DATA

	tempValue = GPIOx->LCKR;

}
void GPIO_Toggle_Pin(GPIO_TypDef_t *GPIOx,uint16_t GPIO_PinNumber)
{
	uint32_t tempValue;
	tempValue = GPIOx->ODR;
	GPIOx->BSRR = ((tempValue & GPIO_PinNumber) << 16u) | (~tempValue & GPIO_PinNumber);


}
