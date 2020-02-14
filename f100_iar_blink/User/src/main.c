#include "main.h"

volatile uint32_t counter = 0;



int main(void)
{
  GPIO_Init();
  TIM4_Init();
  __enable_irq();
  while(1)
  {
    if(counter >= 1)
    {
      counter = 0;
      GPIOC->ODR ^= GPIO_ODR_ODR13;
    }
  }
}



void GPIO_Init(void)
{
  RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
  GPIOC->CRH |= GPIO_CRH_MODE13;
  GPIOC->CRH &= ~(GPIO_CRH_CNF13);
  
  GPIOC->ODR |= GPIO_ODR_ODR13;
}


void TIM4_Init(void)    
{
  RCC->APB1ENR |= RCC_APB1ENR_TIM4EN;
  
  /*
  TIM_CLK = 24e6
  TIM_PSC = 3200

  TIM_TICK = 1/(TIM_CLK/(TIM_PSC + 1)) = 0.000133
  for 1s period TIM_ARR is:
  TIM_ARR = 1/TIM_TICK = 7497.657
  */
  
  TIM4->CNT = (uint16_t)0;
  TIM4->PSC = (uint16_t)3200;
  TIM4->ARR = (uint16_t)(7498);
  
  TIM4->CR1 |= TIM_CR1_CEN;
  TIM4->DIER |= TIM_DIER_UIE;
  
  
  NVIC_EnableIRQ(TIM4_IRQn);
}


void TIM4_IRQHandler(void)
{
  if(TIM4->SR & TIM_SR_UIF)
  {
    TIM4->SR &= ~TIM_SR_UIF;
    counter++;
  }
}

