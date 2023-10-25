/*
 * RCC.h
 *
 *  Created on: 25 Oct 2023
 *      Author: alper
 */

#ifndef INC_RCC_H_
#define INC_RCC_H_

#include "STM32F446xx.h"

/*
 * RCC Peripherals Clock Macros
 */
#define RCC_GPIOA_CLK_ENB()						do{	uint32_t tempValue = 0;\
													SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN);\
													tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN);\
													UNUSED(tempValue);\
													}while(0)

#define RCC_GPIOB_CLK_ENB()						do{	uint32_t tempValue = 0;\
													SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN);\
													tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN);\
													UNUSED(tempValue);\
													}while(0)

#define RCC_GPIOC_CLK_ENB()						do{	uint32_t tempValue = 0;\
													SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOCEN);\
													tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOCEN);\
													UNUSED(tempValue);\
													}while(0)

#define RCC_GPIOD_CLK_ENB()						do{	uint32_t tempValue = 0;\
													SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIODEN);\
													tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIODEN);\
													UNUSED(tempValue);\
													}while(0)

#define RCC_GPIOE_CLK_ENB()						do{	uint32_t tempValue = 0;\
													SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOEEN);\
													tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOEEN);\
													UNUSED(tempValue);\
													}while(0)

#define RCC_GPIOF_CLK_ENB()						do{	uint32_t tempValue = 0;\
													SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOFEN);\
													tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOFEN);\
													UNUSED(tempValue);\
													}while(0)

#define RCC_GPIOG_CLK_ENB()						do{	uint32_t tempValue = 0;\
													SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOGEN);\
													tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOGEN);\
													UNUSED(tempValue);\
													}while(0)

#define RCC_GPIOH_CLK_ENB()						do{	uint32_t tempValue = 0;\
													SET_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOHEN);\
													tempValue = READ_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOHEN);\
													UNUSED(tempValue);\
													}while(0)

#define RCC_GPIOA_CLK_DISABLE					CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOAEN)
#define RCC_GPIOB_CLK_DISABLE 					CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOBEN)
#define RCC_GPIOC_CLK_DISABLE					CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOCEN)
#define RCC_GPIOD_CLK_DISABLE 					CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIODEN)
#define RCC_GPIOE_CLK_DISABLE					CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOEEN)
#define RCC_GPIOF_CLK_DISABLE 					CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOFEN)
#define RCC_GPIOG_CLK_DISABLE					CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOGEN)
#define RCC_GPIOH_CLK_DISABLE 					CLEAR_BIT(RCC->AHB1ENR, RCC_AHB1ENR_GPIOHEN)

#endif /* INC_RCC_H_ */
