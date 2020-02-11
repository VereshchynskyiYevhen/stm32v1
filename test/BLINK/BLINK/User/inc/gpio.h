#ifndef _GPIO_H
#define _GPIO_H
#include "stm32f1xx.h"


#define BLUE_LED_PORT 	GPIOC
#define BLUE_LED_PIN	(uint32_t)(1<<8)


#define GREEN_LED_PORT	GPIOC
#define GREEN_LED_PIN	(uint32_t)(1<<9)

void GPIO_Init(void);

#endif
