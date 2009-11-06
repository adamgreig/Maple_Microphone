// Read analogue values from an electret microphone

#include "stm32f10x.h"

#pragma once

//Defines
#define MIC_GPIO      GPIOA
#define MIC_RCC_GPIO  RCC_APB2Periph_GPIOA
#define MIC_ADC       ADC1
#define MIC_RCC_ADC   RCC_APB2Periph_ADC1
#define MIC_ADC_CHAN  ADC_Channel_3
#define MIC_PITCH     GPIO_Pin_3


//Public functions
void mic_init();
uint16_t mic_value();
