// NuMaker-PFM-NUC472 use ADC0 (A0/PE_1) to read gas sensor (MQ-3)
#include "mbed.h"
#if defined(TARGET_NUMAKER_PFM_NUC472)
AnalogIn   adc0(PE_1); // A0 connected to MQ-3 gas sensor
#elif defined(TARGET_NUMAKER_PFM_M453)
AnalogIn   adc0(PB_0);
#elif defined(TARGET_NUMAKER_PFM_M487)
AnalogIn   adc0(PB_6);
#elif defined(TARGET_NUMAKER_PFM_NANO130)
AnalogIn   adc0(PA_0);
#endif

DigitalOut led(LED1);

int main(void)
{
    printf("ADC0 start reading...\n\r");
    while (1) { 
        printf("ADC0 value= 0x%4x, percentage= %3.3f%%\n\r",adc0.read_u16(), adc0.read()*100.0f);
        if(adc0 > 0.7f) led = 0; // > 0.7 * Vcc wil turn on led
        else            led = 1;
        wait(0.2f);
    }
}
