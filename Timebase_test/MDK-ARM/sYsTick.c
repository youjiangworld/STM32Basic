#include "sYsTick.h"

void SysTick_Init(void)
{
	
	HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/10); // (1/200M)*(HAL_RCC_GetHCLKFreq()/1000)=1ms     100ms中断一次
	//系统滴答定时器时钟源
	HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);
	//系统滴答定时器中断优先级配置
	HAL_NVIC_SetPriority(SysTick_IRQn,0,0);

}
