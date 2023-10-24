/*
 * STM32F4xx.h
 *
 *  Created on: Oct 23, 2023
 *      Author: alper
 */

#ifndef INC_STM32F446XX_H_
#define INC_STM32F446XX_H_

#include <stdint.h>

#define __OI volatile
/*
 * MEMORY BASE ADDRESS
 */

#define FLASH_BASE_ADDR                (0x08000000UL)         	 		     /*FLASH BASE ADDRESS Capacity up to 512 KBytes*/
#define SRAM1_BASE_ADDR                (0x20000000UL)         		   		 /*SRAM1 BASE ADDRESS 116 KBytes*/
#define SRAM2_BASE_ADDR                (0x2001C000UL) 		 			     /*SRAM2 BASE ADDRESS 16 KBytes*/

/*
 * Perhipheral base adresses
 */

#define PERIPH_BASE_ADDR  			    (0x40000000UL)
#define APB1_BASE_ADDR				    PERIPH_BASE_ADDR
#define APB2_BASE_ADDR		            (PERIPH_BASE_ADDR + 0x00010000UL)
#define AHB1_BASE_ADDR					(PERIPH_BASE_ADDR + 0x00020000UL)
#define AHB2_BASE_ADDR					(PERIPH_BASE_ADDR + 0x10000000UL)

/*
 * APB1 Bus Perhipherals Base Adresses
 */

#define TIM2_BASE_ADDR 					(APB1_BASE_ADDR)             	/*Timer 2 Base Adress	*/
#define TIM3_BASE_ADDR					(APB1_BASE_ADDR + 0x0400UL)	 	/*Timer 3 Base Adress	*/
#define TIM4_BASE_ADDR					(APB1_BASE_ADDR + 0x0800UL)	 	/*Timer 4 Base Adress	*/
#define TIM5_BASE_ADDR					(APB1_BASE_ADDR + 0x0C00UL)	 	/*Timer 5 Base Adress	*/

#define SPI2_BASE_ADDR					(APB1_BASE_ADDR + 0x3800UL)		/* Spi 2 Base Adress	*/
#define SPI3_BASE_ADDR					(APB1_BASE_ADDR + 0x3C00UL)		/* Spi 2 Base Adress	*/

#define USART2_BASE_ADDR				(APB1_BASE_ADDR + 0x4400UL)		/* USART 2 Base Adress	*/
#define USART3_BASE_ADDR				(APB1_BASE_ADDR + 0x4800UL)		/* USART 3 Base Adress	*/
#define UART4_BASE_ADDR					(APB1_BASE_ADDR + 0x4C00UL)		/* UART 4 Base Adress	*/
#define UART5_BASE_ADDR					(APB1_BASE_ADDR + 0x5000UL)		/* UART 5 Base Adress	*/

#define I2C1_BASEE_ADDR					(APB1_BASE_ADDR + 0X5400UL) 	/* I2C 1 Base Adress	*/
#define I2C2_BASEE_ADDR					(APB1_BASE_ADDR + 0X5800UL) 	/* I2C 2 Base Adress	*/
#define I2C3_BASEE_ADDR					(APB1_BASE_ADDR + 0X5C00UL) 	/* I2C 3 Base Adress	*/

/*
 * APB2 Bus Perhipherals Base Adresses
 */

#define TIM1_BASE_ADDR 					(APB2_BASE_ADDR + 0x0000UL)				/*Timer 1 Base adress	*/
#define TIM8_BASE_ADDR					(APB2_BASE_ADDR + 0x0400UL)				/*Timer 8 Base adress	*/

#define USART1_BASE_ADDR				(APB2_BASE_ADDR + 0x1000UL)				/*USART 1 Base adress	*/
#define USART6_BASE_ADDR				(APB2_BASE_ADDR + 0x1400UL)				/*USART 6 Base adress	*/

#define ADC1_BASE_ADDR					(APB2_BASE_ADDR + 0x2000UL)				/*ADC 1 Base adress		*/
#define ADC2_BASE_ADDR					(APB2_BASE_ADDR + 0x2000UL + 0x100UL)	/*ADC 2 Base adress		*/
#define ADC3_BASE_ADDR					(APB2_BASE_ADDR + 0x2000UL + 0x200UL)	/*ADC 3 Base adress		*/

#define SPI1_BASE_ADDR					(APB2_BASE_ADDR + 0x3000UL)				/*SPI 1 Base adress		*/
#define SPI4_BASE_ADDR					(APB2_BASE_ADDR + 0x3400UL)				/*SPI 4 Base adress		*/

#define SYSCFG_BASE_ADDR				(APB2_BASE_ADDR + 0x3800UL)				/*SYSCFG  Base adress	*/

#define EXTI_BASE_ADDR 					(APB2_BASE_ADDR + 0x3C00UL)				/*EXTI  Base adress		*/

/*
 *  AHB1 Bus Perhipherals Base Adresses
 */

#define GPIOA_BASE_ADDR					(AHB1_BASE_ADDR + 0x0000UL)
#define GPIOB_BASE_ADDR 				(AHB1_BASE_ADDR + 0x0400UL)
#define GPIOC_BASE_ADDR 				(AHB1_BASE_ADDR + 0x0800UL)
#define GPIOD_BASE_ADDR 				(AHB1_BASE_ADDR + 0x0C00UL)
#define GPIOE_BASE_ADDR 				(AHB1_BASE_ADDR + 0x1000UL)
#define GPIOF_BASE_ADDR 				(AHB1_BASE_ADDR + 0x1400UL)
#define GPIOG_BASE_ADDR 				(AHB1_BASE_ADDR + 0x1800UL)
#define GPIOH_BASE_ADDR 				(AHB1_BASE_ADDR + 0x1C00UL)

#define RCC_BASE_ADDR 					(AHB1_BASE_ADDR + 0x3800UL)

typedef struct
{
	__OI uint32_t MODER;
	__OI uint32_t OSPEEDER;
	__OI uint32_t PUPDR;
	__OI uint32_t IDR;
	__OI uint32_t ODR;
	__OI uint32_t BSRR;
	__OI uint32_t LCKR;
	__OI uint32_t AFR[2];

}GPIO_TypDef_t;

typedef struct
{
	__OI uint32_t CR;
	__OI uint32_t PLLCFGR;
	__OI uint32_t CFGR;
	__OI uint32_t CIR;
	__OI uint32_t AHB1RSTR;
	__OI uint32_t AHB2RSTR;
	__OI uint32_t AHB3RSTR;
	__OI uint32_t RESERVED0;
	__OI uint32_t APB1RSTR;
	__OI uint32_t APB2RSTR;
	__OI uint32_t RESERVED1;
	__OI uint32_t RESERVED2;
	__OI uint32_t AHB1ENR;
	__OI uint32_t AHB2ENR;
	__OI uint32_t AHB3ENR;
	__OI uint32_t RESERVED3;
	__OI uint32_t APB1ENR;
	__OI uint32_t APB2ENR;
	__OI uint32_t RESERVED4;
	__OI uint32_t RESERVED5;
	__OI uint32_t AHB1LPENR;
	__OI uint32_t AHB2LPENR;
	__OI uint32_t AHB3LPENR;
	__OI uint32_t RESERVED6;
	__OI uint32_t APB1LPENR;
	__OI uint32_t APB2LPENR;
	__OI uint32_t RESERVED7;
	__OI uint32_t RESERVED8;
	__OI uint32_t BDCR;
	__OI uint32_t CSR;
	__OI uint32_t RESERVED9;
	__OI uint32_t RESERVED10;
	__OI uint32_t SSCGR;
	__OI uint32_t PLLI2SCFGR;
	__OI uint32_t PLLSAICFGR;
	__OI uint32_t DCKCFGR;
	__OI uint32_t CKGATENR;
	__OI uint32_t DCKCFGR2;
}RCC_TypeDef_t;

#define GPIOA							((GPIO_TypDef_t *)(GPIOA_BASE_ADDR))
#define GPIOB							((GPIO_TypDef_t *)(GPIOB_BASE_ADDR))
#define GPIOC							((GPIO_TypDef_t *)(GPIOC_BASE_ADDR))
#define GPIOD							((GPIO_TypDef_t *)(GPIOD_BASE_ADDR))
#define GPIOE							((GPIO_TypDef_t *)(GPIOE_BASE_ADDR))
#define GPIOF							((GPIO_TypDef_t *)(GPIOF_BASE_ADDR))
#define GPIOG							((GPIO_TypDef_t *)(GPIOG_BASE_ADDR))
#define GPIOH							((GPIO_TypDef_t *)(GPIOH_BASE_ADDR))

#define RCC								((RCC_TypeDef_t *)(RCC_BASE_ADDR)  )




#endif /* INC_STM32F446XX_H_ */
