#include "clk.h"


void CLK_Init(void)
{
	//uint8_t //0..255 unsigned char;
	//int8_t; //-127..128 char;
	//uint16_t;
	//int16_t;
	//uint32_t
	//int32_t

	//1 & 1 = 1
	//1 0 0
	//0 1 0
	//0 0 0

	//1 | 1 = 1
	//1 0 1
	//0 1 1
	//1 1 1

	RCC->CR |= RCC_CR_HSEON;
	while(!(RCC->CR & RCC_CR_HSERDY));

	RCC->CFGR |= RCC_CFGR_PLLMULL_3;
	RCC->CFGR |= RCC_CFGR_PLLSRC;
	RCC->CFGR2 &= ~RCC_CFGR2_PREDIV1;
	while(RCC->CR & RCC_CR_PLLRDY);
	RCC->CR |= RCC_CR_PLLON;



	RCC->CFGR |= RCC_CFGR_SW_PLL;
	while(!(RCC->CFGR & RCC_CFGR_SWS_PLL));

	RCC->CFGR &= ~RCC_CFGR_HPRE_3;
	RCC->CFGR &= ~RCC_CFGR_PPRE1;
	RCC->CFGR &= ~RCC_CFGR_PPRE2;
}

