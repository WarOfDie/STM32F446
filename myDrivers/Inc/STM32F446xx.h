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




#endif /* INC_STM32F446XX_H_ */
