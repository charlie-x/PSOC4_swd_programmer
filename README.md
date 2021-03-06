PSOC4_swd_programmer
====================

##SWD Programmer for PSoc 4 based devices.

To build the programmer you would need a basic FX2LP device. One from amazon or ebay based on CY7C68013A would do. Install the FX2LP SDK from Cypress and flash swd.iic to RAM, or reconnect the jumper on the board and reprogram the 64K eprom from the FX2LP folder on the FX2LP device.

if the jumper isn't connected only flash to RAM will work.

Connct:
```
    FX2LP       PSoc 4
    Device      Target
    ------      ---------------
    PD0    ---> SWDIO
    PD1    ---> SWDCL
    PB2    ---> XRES (or RESET)
    GND    ---> GND
    3.3V   ---> VCC (Don't connect for the BlinkyBall)
```
This will power the target as 3.3V from the FX2LP board. Please make sure there is no other power connected to the target as the FX2LP device is not 5V tolerant.

For the RGB BlinkyBall make sure it is powered from the USB cable, as it runs at 3.3V and is safe to.

Use the PC software to flash a .hex file to the target.

Limitations:
- only tested on PSoc 4100 and 4200 (I don't have 4000 device)
- only tested on 32K flash device (16K devices should work but YMMV).

Building the software:

There is a windows PC project for visual studio 2017. Multiplatform support requires libusb. 

There is also a prebuilt .exe

The device software needs the Keil PK51 toolchain. There is a compiled binary swd.iic you can use as well.
