/*
 * STM32F4xx.h
 *
 *  Created on: Oct 23, 2023
 *      Author: alper
 */

#ifndef INC_STM32F446XX_H_
#define INC_STM32F446XX_H_

/*
 * MEMORY BASE ADDRESS
 */

#define FLASH_BASE_ADDR                (0x08000000UL)          /*FLASH BASE ADDRESS Capacity up to 512 KBytes*/
#define SRAM1_BASE_ADDR                (0x20000000UL)          /*SRAM1 BASE ADDRESS 116 KBytes*/
#define SRAM2_BASE_ADDR                (0x2001C000UL) 		   /*SRAM2 BASE ADDRESS 16 KBytes*/

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

#define TIM1_BASE_ADDR 					(APB2_BASE_ADDR + 0x0000UL)
#define TIM8_BASE_ADDR					(APB2_BASE_ADDR + 0x0400UL)

#define USART1_BASE_ADDR				(APB2_BASE_ADDR + 0x1000UL)
#define USART6_BASE_ADDR				(APB2_BASE_ADDR + 0x1400UL)

#define ADC1_BASE_ADDR					(APB2_BASE_ADDR + 0x2000UL)
#define ADC2_BASE_ADDR					(APB2_BASE_ADDR + 0x2000UL + 0x100UL)
#define ADC3_BASE_ADDR					(APB2_BASE_ADDR + 0x2000UL + 0x200UL)

#define SPI1_BASE_ADDR					(APB2_BASE_ADDR + 0x3000UL)
#define SPI4_BASE_ADDR					(APB2_BASE_ADDR + 0x3400UL)

#define SYSCFG_BASE_ADDR				(APB2_BASE_ADDR + 0x3800UL)

#define EXTI_BASE_ADDR 					(APB2_BASE_ADDR + 0x3C00UL)



#endif /* INC_STM32F446XX_H_ */
