# Getting started with ADC on mbed OS


### Import NuMaker-mbed-ADC0_MQ3 from on-line IDE
1. Please choose Nuvoton NuMaker-PFM-XXX as your target platform.
2. Please press the left-up icon "New", then choose "NuMaker ADC read gas sensor (MQ3)" from the template list.
3. Your NuMaker-mbed-ADC0_MQ3 program is existed.

#### Now compile
Please press compile icon.

#### Burn Code & Execute
1. Connect the board NuMaker-PFM-XXX with your PC by USB cable, then there will be one "mbed" disk.
2. Copy the built binary file into "mbed" disk on you PC.
3. Press device's reset button and you could get the below log by uart console. UART baud is 9600 at default.
-------------------------------------------------------------------------------
 ADC0 start reading...
 ADC0 value= 0x 8f0, percentage= 0.098%
 ADC0 value= 0x1711, percentage= 6.152%
			:
			:

--------------------------------------------------------------------------
If the percentage is over than 70.000%, LED will be on. otherwise LED will be off.