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

#define SET_BIT(REG, BIT)				( (REG) |=  (BIT) )
#define CLEAR_BIT(REG, BIT)				( (REG) &= ~(BIT) )
#define READ_BIT(REG, BIT)			    ( (REG) &   (BIT) )
#define UNUSED(x)						(void)x

/*
 * MEMORY BASE ADDRESS
 */

#define FLASH_BASE_ADDR               	(0x08000000UL)         	 		     /*FLASH BASE ADDRESS Capacity up to 512 KBytes*/
#define SRAM1_BASE_ADDR              	(0x20000000UL)         		   		 /*SRAM1 BASE ADDRESS 116 KBytes*/
#define SRAM2_BASE_ADDR              	(0x2001C000UL) 		 			     /*SRAM2 BASE ADDRESS 16 KBytes*/

/*
 * Perhipheral base adresses
 */

#define PERIPH_BASE_ADDR  			    (0x40000000UL)
#define APB1_BASE_ADDR				    (PERIPH_BASE_ADDR)
#define APB2_BASE_ADDR		            (PERIPH_BASE_ADDR + 0x00010000UL)
#define AHB1_BASE_ADDR					(PERIPH_BASE_ADDR + 0x00020000UL)
#define AHB2_BASE_ADDR					(PERIPH_BASE_ADDR + 0x10000000UL)

/*
 * APB1 Bus Perhipherals Base Adresses
 */

#define TIM2_BASE_ADDR 					(APB1_BASE_ADDR)             	/*Timer 2 	Base Address	*/
#define TIM3_BASE_ADDR					(APB1_BASE_ADDR + 0x0400UL)	 	/*Timer 3 	Base Address	*/
#define TIM4_BASE_ADDR					(APB1_BASE_ADDR + 0x0800UL)	 	/*Timer 4 	Base Address	*/
#define TIM5_BASE_ADDR					(APB1_BASE_ADDR + 0x0C00UL)	 	/*Timer 5 	Base Address	*/

#define SPI2_BASE_ADDR					(APB1_BASE_ADDR + 0x3800UL)		/* Spi 2 	Base Address	*/
#define SPI3_BASE_ADDR					(APB1_BASE_ADDR + 0x3C00UL)		/* Spi 2 	Base Address	*/

#define USART2_BASE_ADDR				(APB1_BASE_ADDR + 0x4400UL)		/* USART 2 	Base Address	*/
#define USART3_BASE_ADDR				(APB1_BASE_ADDR + 0x4800UL)		/* USART 3	Base Address	*/
#define UART4_BASE_ADDR					(APB1_BASE_ADDR + 0x4C00UL)		/* UART 4 	Base Address	*/
#define UART5_BASE_ADDR					(APB1_BASE_ADDR + 0x5000UL)		/* UART 5 	Base Address	*/

#define I2C1_BASEE_ADDR					(APB1_BASE_ADDR + 0X5400UL) 	/* I2C 1 	Base Address	*/
#define I2C2_BASEE_ADDR					(APB1_BASE_ADDR + 0X5800UL) 	/* I2C 2 	Base Address	*/
#define I2C3_BASEE_ADDR					(APB1_BASE_ADDR + 0X5C00UL) 	/* I2C 3 	Base Address	*/

/*
 * APB2 Bus Perhipherals Base Adresses
 */

#define TIM1_BASE_ADDR 					(APB2_BASE_ADDR + 0x0000UL)				/*Timer 1 	Base address	*/
#define TIM8_BASE_ADDR					(APB2_BASE_ADDR + 0x0400UL)				/*Timer 8 	Base address	*/

#define USART1_BASE_ADDR				(APB2_BASE_ADDR + 0x1000UL)				/*USART 1 	Base address	*/
#define USART6_BASE_ADDR				(APB2_BASE_ADDR + 0x1400UL)				/*USART 6	Base address	*/

#define ADC1_BASE_ADDR					(APB2_BASE_ADDR + 0x2000UL)				/*ADC 1 	Base address	*/
#define ADC2_BASE_ADDR					(APB2_BASE_ADDR + 0x2000UL + 0x100UL)	/*ADC 2 	Base address	*/
#define ADC3_BASE_ADDR					(APB2_BASE_ADDR + 0x2000UL + 0x200UL)	/*ADC 3 	Base address	*/

#define SPI1_BASE_ADDR					(APB2_BASE_ADDR + 0x3000UL)				/*SPI 1 	Base address	*/
#define SPI4_BASE_ADDR					(APB2_BASE_ADDR + 0x3400UL)				/*SPI 4 	Base address	*/

#define SYSCFG_BASE_ADDR				(APB2_BASE_ADDR + 0x3800UL)				/*SYSCFG  	Base address	*/

#define EXTI_BASE_ADDR 					(APB2_BASE_ADDR + 0x3C00UL)				/*EXTI  	Base address	*/

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
	__OI uint32_t OTYPER;
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
	__OI uint32_t CR;				/*!< RCC clock control register 									Address offset = 0x00*/
	__OI uint32_t PLLCFGR;			/*!< RCC PLL configuration register 								Address offset = 0x04*/
	__OI uint32_t CFGR;				/*!< RCC clock configuration register 								Address offset = 0x08*/
	__OI uint32_t CIR;				/*!< RCC clock interrupt register 									Address offset = 0x0C*/
	__OI uint32_t AHB1RSTR;			/*!< RCC AHB1 peripheral reset register 							Address offset = 0x10*/
	__OI uint32_t AHB2RSTR;			/*!< RCC AHB2 peripheral reset register 							Address offset = 0x14*/
	__OI uint32_t AHB3RSTR;			/*!< RCC AHB3 peripheral reset register 							Address offset = 0x18*/
	__OI uint32_t RESERVED0;
	__OI uint32_t APB1RSTR;			/*!< RCC APB1 peripheral reset register 							Address offset = 0x20*/
	__OI uint32_t APB2RSTR;			/*!< RCC APB2 peripheral reset register 							Address offset = 0x24*/
	__OI uint32_t RESERVED1;
	__OI uint32_t RESERVED2;
	__OI uint32_t AHB1ENR;			/*!< RCC AHB1 peripheral clock enable register 						Address offset = 0x30*/
	__OI uint32_t AHB2ENR;			/*!< RCC AHB2 peripheral clock enable register 						Address offset = 0x34*/
	__OI uint32_t AHB3ENR;			/*!< RCC AHB3 peripheral clock enable register 						Address offset = 0x38*/
	__OI uint32_t RESERVED3;
	__OI uint32_t APB1ENR;			/*!< RCC APB1 peripheral clock enable register 						Address offset = 0x40*/
	__OI uint32_t APB2ENR;			/*!< RCC APB2 peripheral clock enable register 						Address offset = 0x44*/
	__OI uint32_t RESERVED4;
	__OI uint32_t RESERVED5;
	__OI uint32_t AHB1LPENR;		/*!< RCC AHB1 peripheral clock enable in low power mode register 	Address offset = 0x50*/
	__OI uint32_t AHB2LPENR;		/*!< RCC AHB2 peripheral clock enable in low power mode register 	Address offset = 0x54*/
	__OI uint32_t AHB3LPENR;		/*!< RCC AHB3 peripheral clock enable in low power mode register 	Address offset = 0x58*/
	__OI uint32_t RESERVED6;		/*!< RCC clock control register Address offset = 0x00*/
	__OI uint32_t APB1LPENR;		/*!< RCC APB1 peripheral clock enable in low power mode register 	Address offset = 0x60*/
	__OI uint32_t APB2LPENR;		/*!< RCC APB2 peripheral clock enabled in low power mode register 	Address offset = 0x64*/
	__OI uint32_t RESERVED7;
	__OI uint32_t RESERVED8;
	__OI uint32_t BDCR;				/*!< RCC Backup domain control register 							Address offset = 0x70*/
	__OI uint32_t CSR;				/*!< RCC clock control & status register 							Address offset = 0x74*/
	__OI uint32_t RESERVED9;
	__OI uint32_t RESERVED10;
	__OI uint32_t SSCGR;			/*!< RCC spread spectrum clock generation register 					Address offset = 0x80*/
	__OI uint32_t PLLI2SCFGR;		/*!< RRCC PLLI2S configuration register 							Address offset = 0x84*/
	__OI uint32_t PLLSAICFGR;		/*!< RCC PLL configuration register 								Address offset = 0x88*/
	__OI uint32_t DCKCFGR;			/*!< RCC dedicated clock configuration register 					Address offset = 0x8C*/
	__OI uint32_t CKGATENR;			/*!< RCC clocks gated enable register 								Address offset = 0x90*/
	__OI uint32_t DCKCFGR2;			/*!< RCC dedicated clocks configuration register 2 					Address offset = 0x94*/
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

/*
 * Bit definitions for GPIO
 */
#define RCC_AHB1ENR_GPIOAEN_Pos			(0U)								// RCC AHB1ENR register GPIOAEN Bit Position
#define RCC_AHB1ENR_GPIOAEN_Msk			(0x1 << RCC_AHB1ENR_GPIOAEN_Pos)	// RCC AHB1ENR register GPIOAEN Bit Mask
#define RCC_AHB1ENR_GPIOAEN				RCC_AHB1ENR_GPIOAEN_Msk				// RCC AHB1ENR register GPIOAEN Bit Macro

#define RCC_AHB1ENR_GPIOBEN_Pos         (1U)								// RCC AHB1ENR register GPIOBEN Bit Position
#define RCC_AHB1ENR_GPIOBEN_Msk			(0x1 << RCC_AHB1ENR_GPIOBEN_Pos)	// RCC AHB1ENR register GPIOBEN Bit Mask
#define RCC_AHB1ENR_GPIOBEN				RCC_AHB1ENR_GPIOBEN_Msk				// RCC AHB1ENR register GPIOBEN Bit Macro

#define RCC_AHB1ENR_GPIOCEN_Pos         (2U)								// RCC AHB1ENR register GPIOCEN Bit Position
#define RCC_AHB1ENR_GPIOCEN_Msk			(0x1 << RCC_AHB1ENR_GPIOBEN_Pos)	// RCC AHB1ENR register GPIOCEN Bit Mask
#define RCC_AHB1ENR_GPIOCEN				RCC_AHB1ENR_GPIOBEN_Msk				// RCC AHB1ENR register GPIOCEN Bit Macro

#define RCC_AHB1ENR_GPIODEN_Pos         (3U)								// RCC AHB1ENR register GPIODEN Bit Position
#define RCC_AHB1ENR_GPIODEN_Msk			(0x1 << RCC_AHB1ENR_GPIOBEN_Pos)	// RCC AHB1ENR register GPIODEN Bit Mask
#define RCC_AHB1ENR_GPIODEN				RCC_AHB1ENR_GPIOBEN_Msk				// RCC AHB1ENR register GPIODEN Bit Macro

#define RCC_AHB1ENR_GPIOEEN_Pos         (4U)								// RCC AHB1ENR register GPIOEEN Bit Position
#define RCC_AHB1ENR_GPIOEEN_Msk			(0x1 << RCC_AHB1ENR_GPIOBEN_Pos)	// RCC AHB1ENR register GPIOEEN Bit Mask
#define RCC_AHB1ENR_GPIOEEN				RCC_AHB1ENR_GPIOBEN_Msk				// RCC AHB1ENR register GPIOEEN Bit Macro

#define RCC_AHB1ENR_GPIOFEN_Pos         (5U)								// RCC AHB1ENR register GPIOFEN Bit Position
#define RCC_AHB1ENR_GPIOFEN_Msk			(0x1 << RCC_AHB1ENR_GPIOBEN_Pos)	// RCC AHB1ENR register GPIOFEN Bit Mask
#define RCC_AHB1ENR_GPIOFEN				RCC_AHB1ENR_GPIOBEN_Msk				// RCC AHB1ENR register GPIOFEN Bit Macro

#define RCC_AHB1ENR_GPIOGEN_Pos         (6U)								// RCC AHB1ENR register GPIOGEN Bit Position
#define RCC_AHB1ENR_GPIOGEN_Msk			(0x1 << RCC_AHB1ENR_GPIOBEN_Pos)	// RCC AHB1ENR register GPIOGEN Bit Mask
#define RCC_AHB1ENR_GPIOGEN				RCC_AHB1ENR_GPIOBEN_Msk				// RCC AHB1ENR register GPIOGEN Bit Macro

#define RCC_AHB1ENR_GPIOHEN_Pos         (7U)								// RCC AHB1ENR register GPIOHEN Bit Position
#define RCC_AHB1ENR_GPIOHEN_Msk			(0x1 << RCC_AHB1ENR_GPIOBEN_Pos)	// RCC AHB1ENR register GPIOHEN Bit Mask
#define RCC_AHB1ENR_GPIOHEN				RCC_AHB1ENR_GPIOBEN_Msk				// RCC AHB1ENR register GPIOHEN Bit Macro

#endif /* INC_STM32F446XX_H_ */
