#include "sYsTick.h"

void SysTick_Init(void)
{
	
	HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq()/10); // (1/200M)*(HAL_RCC_GetHCLKFreq()/1000)=1ms     100ms�ж�һ��
	//ϵͳ�δ�ʱ��ʱ��Դ
	HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);
	//ϵͳ�δ�ʱ���ж����ȼ�����
	HAL_NVIC_SetPriority(SysTick_IRQn,0,0);

}
