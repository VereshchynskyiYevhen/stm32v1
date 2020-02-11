#include "main.h"

void Delay(void);

//void __attribute__ ((weak)) _init(void)  {}


int main(void)
{
	//CLK_Init();
	GPIO_Init();
	while(1)
	{
		BLUE_LED_PORT->ODR |= (1<<13);
		Delay();
		//BLUE_LED_PORT->ODR ^= BLUE_LED_PIN;
		BLUE_LED_PORT->ODR &= ~(1<<13);
		Delay();
	}

}




void Delay(void)
{
	int i=0;
	for(i=0;i<10000000;i++)
	{
		__asm("nop");
	}
}


