#include "main.h"



int main(void)
{
  GPIO_Init();
  while(1)
  {
    GPIOC->ODR ^= GPIO_ODR_ODR8;
  }
}



void GPIO_Init(void)
{
  RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
  GPIOC->CRH |= GPIO_CRH_MODE8;
  GPIOC->CRH &= ~(GPIO_CRH_CNF8);
  
 // GPIOC->BSRR |= GPIO_BSRR_BS8;
   GPIOC->ODR |= GPIO_ODR_ODR8;
}
void TIM4_init(void)    
{
  RCC->APB1ENR |=RCC_APB1ENR_TIM4EN;
   TIM4->CNT = (unit16_t)0;
  TIM4->PSC = (unit16_t)30000;
  TIM4->ARR = (unit16_t)(1500);
}
/*void RCC_CIR_init(void)//interrupt function
{      
  RCC->APB1ENR|=RCC_APB1ENR_CIREN;
}
*/
void TIM4RST_init(void)
{TIM4RST->CNT = (unit16_t)1;
  TIM4RST->PSC = (unit16_t)1;
}
return 0;