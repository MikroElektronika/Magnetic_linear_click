![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# MagneticLinear Click

- **CIC Prefix**  : MAGNETICLINEAR
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : nov 2018.

---

### Software Support

We provide a library for the MagneticLinear Click on our [LibStock](https://libstock.mikroe.com/projects/view/2654/magnetic-linear-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library contains a function for reading the linear position of the magnet.

Key functions :

- ``` uint16_t magneticlinear_readData() ``` - Functions reads Magnetics Linear data

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes SPI init and sets CS pin as OUTPUT
- Application Initialization - Initialization driver init
- Application Task - (code snippet) - Reads Magnetics linear data and this data logs to USBUART every 200ms.

```.c
void applicationTask()
{
    uint16_t magneticData;
    char demoText[ 50 ];
    
    magneticData = magneticlinear_readData();
    IntToStr(magneticData, demoText);
    mikrobus_logWrite(" Magnetic Linear data : ", _LOG_TEXT);
    mikrobus_logWrite(demoText, _LOG_LINE);
    
    mikrobus_logWrite("________________", _LOG_LINE);
    Delay_ms( 200 );
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2654/magnetic-linear-click) page.

Other mikroE Libraries used in the example:

- SPI

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---
