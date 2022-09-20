#include "button_handler.h"
#include "stm32f4xx_hal.h"
//#include "stm32f4xx_hal_def.h"

void button_handler(void)
{
if(HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_0)) //if button is pressed
	  {
		  GPIOD->ODR |= (1 << 13);  //turn on LED
		  HAL_Delay(50);  //debounce for 50 ms
		  while(HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_0)) //wait until button is released
		  {
		  }
		  HAL_Delay(50);  //debounce for 50 ms
		  while(!HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_0)) //wait until button is pressed again
		  {
		  }
		  GPIOD->ODR &= ~(1 << 13);  //turn off LED
		  HAL_Delay(50);  //debounce for 50 ms
		  while(HAL_GPIO_ReadPin (GPIOA, GPIO_PIN_0)) //wait until button is released
		  {
		  }
		  HAL_Delay(50);  //debounce for 50 ms
	  }
}
