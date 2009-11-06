/*
 * MAPLE Project
 * Microphone: Read values from microphones, do stuff with them.
 */

// Load CMSIS and peripheral library and configuration
#include "stm32f10x.h"

// Load various utility functions
#include "util.h"

// Include files for attached devices
#include "microphone.h"
#include "usart.h"

int main(void) {
    // Set up STM32 system (clock, PLL and Flash configuration)
    SystemInit();
    
    // Set up the microphone ADC
    mic_init();
    
    // Set up the USART for outputting measured values
    usart_init();
    
    for(;;) {
        
        uint16_t value = mic_value();
        
        __usart_send_char(value >> 3);
    }
}
