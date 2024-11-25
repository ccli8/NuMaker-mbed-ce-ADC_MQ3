# Example for gas sensor MQ3 with ADC on Nuvoton's Mbed CE enabled boards

Check out [Mbed CE](https://github.com/mbed-ce)
for details on Mbed OS community edition.

## Software requirements

Use cmake-based build system.
Check out [hello world example](https://github.com/mbed-ce/mbed-ce-hello-world) for getting started.

> **⚠️ Warning**
>
> Legacy development tools below are not supported anymore.
> - [Arm's Mbed Studio](https://os.mbed.com/docs/mbed-os/v6.15/build-tools/mbed-studio.html)
> - [Arm's Mbed CLI 2](https://os.mbed.com/docs/mbed-os/v6.15/build-tools/mbed-cli-2.html)
> - [Arm's Mbed CLI 1](https://os.mbed.com/docs/mbed-os/v6.15/tools/developing-mbed-cli.html)

For [VS Code development](https://github.com/mbed-ce/mbed-os/wiki/Project-Setup:-VS-Code)
or [OpenOCD as upload method](https://github.com/mbed-ce/mbed-os/wiki/Upload-Methods#openocd),
install below additionally:

-   [NuEclipse](https://github.com/OpenNuvoton/Nuvoton_Tools#numicro-software-development-tools): Nuvoton's fork of Eclipse
-   Nuvoton forked OpenOCD: Shipped with NuEclipse installation package above.
    Checking openocd version `openocd --version`, it should fix to `0.10.022`.

## Developer guide

In the following, we take **NuMaker-PFM-NUC472** board as an example for Mbed CE support.

### Build the example

1.  Clone the example and navigate into it
    ```
    $ git clone https://github.com/mbed-nuvoton/NuMaker-mbed-ce-ADC-MQ3-example
    $ cd NuMaker-mbed-ce-ADC-MQ3-example
    $ git checkout -f master
    ```

1.  Deploy necessary libraries
    ```
    $ git submodule update --init
    ```
    Or for fast install:
    ```
    $ git submodule update --init --filter=blob:none
    ```

1.  Compile with cmake/ninja
    ```
    $ mkdir build; cd build
    $ cmake .. -GNinja -DCMAKE_BUILD_TYPE=Develop -DMBED_TARGET=NUMAKER_PFM_NUC472
    $ ninja
    $ cd ..
    ```

### Flash the image

Flash by drag-n-drop built image `NuMaker-mbed-ce-ADC-MQ3-example.bin` or `NuMaker-mbed-ce-ADC-MQ3-example.hex` onto **NuMaker-PFM-NUC472** board

### Verify the result

-------------------------------------------------------------------------------
 ADC0 start reading...<br>
 ADC0 value= 0x 8f0, percentage= 0.098%<br>
 ADC0 value= 0x1711, percentage= 6.152%<br>
			:<br>
			:<br>

--------------------------------------------------------------------------
If the percentage is over than 70.000%, LED will be on. otherwise LED will be off.
