/*
 * GPIO.h
 *
 *  Created on: Oct 25, 2023
 *      Author: alper
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_

#include "STM32F446xx.h"

/*
 *@def_group GPIO_Pins
 *
 */

#define GPIO_PIN_0				(uint16_t)(0x0001)		/*!< GPIO Pin 0 Selected   */
#define GPIO_PIN_1				(uint16_t)(0x0002)		/*!< GPIO Pin 1 Selected   */
#define GPIO_PIN_2				(uint16_t)(0x0004)		/*!< GPIO Pin 2 Selected   */
#define GPIO_PIN_3				(uint16_t)(0x0008)		/*!< GPIO Pin 3 Selected   */
#define GPIO_PIN_4				(uint16_t)(0x0010)		/*!< GPIO Pin 4 Selected   */
#define GPIO_PIN_5				(uint16_t)(0x0020)		/*!< GPIO Pin 5 Selected   */
#define GPIO_PIN_6				(uint16_t)(0x0040)		/*!< GPIO Pin 6 Selected   */
#define GPIO_PIN_7				(uint16_t)(0x0080)		/*!< GPIO Pin 7 Selected   */
#define GPIO_PIN_8				(uint16_t)(0x0100)		/*!< GPIO Pin 8 Selected   */
#define GPIO_PIN_9				(uint16_t)(0x0200)		/*!< GPIO Pin 9 Selected   */
#define GPIO_PIN_10				(uint16_t)(0x0400)		/*!< GPIO Pin 10 Selected  */
#define GPIO_PIN_11				(uint16_t)(0x0800)		/*!< GPIO Pin 11 Selected  */
#define GPIO_PIN_12				(uint16_t)(0x1000)		/*!< GPIO Pin 12 Selected  */
#define GPIO_PIN_13				(uint16_t)(0x2000)		/*!< GPIO Pin 13 Selected  */
#define GPIO_PIN_15   			(uint16_t)(0x4000)		/*!< GPIO Pin 14 Selected  */
#define GPIO_PIN_ALL			(uint16_t)(0xFFFF)		/*!< GPIO Pin All Selected */

typedef enum
{
	GPIO_PIN_DISABLE = 0x0u,
	GPIO_PIN_ENABLE  = !GPIO_PIN_DISABLE

}GPIO_PinTypeDef_t;

typedef struct
{
	uint32_t Mode;
	uint32_t PuPD;
	uint32_t Speed;
	uint32_t Otype;
	uint32_t Alternate;

}GPIO_InitTypeDef_t;


void GPIO_Pin_Write(GPIO_TypDef_t *GPIOx, uint16_t GPIO_PinNumber, GPIO_PinTypeDef_t PinState);



#endif /* INC_GPIO_H_ */
