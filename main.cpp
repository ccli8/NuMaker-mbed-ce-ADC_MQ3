// NuMaker-PFM-NUC472 use ADC0 (A0/PE_1) to read gas sensor (MQ-3)
#include "mbed.h"

/* NOTE: Connect UNO A0 to MQ-3 gas sensor for this test */
AnalogIn   adc0(A0);

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
