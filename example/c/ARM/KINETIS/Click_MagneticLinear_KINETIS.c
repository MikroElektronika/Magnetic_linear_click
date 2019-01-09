/*
Example for MagneticLinear Click

    Date          : nov 2018.
    Author        : Katarina Perendic

Test configuration KINETIS :
    
    MCU              : MK64
    Dev. Board       : HEXIWEAR
    ARM Compiler ver : v6.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes SPI init and sets CS pin as OUTPUT
- Application Initialization - Initialization driver init
- Application Task - (code snippet) - Reads Magnetics linear data and this data logs to USBUART every 200ms.

*/

#include "Click_MagneticLinear_types.h"
#include "Click_MagneticLinear_config.h"

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
    mikrobus_spiInit( _MIKROBUS1, &_MAGNETICLINEAR_SPI_CFG[0] );
    mikrobus_logInit( _LOG_USBUART, 9600 );
    mikrobus_logWrite("--- System Init ---", _LOG_LINE);
    Delay_ms( 100 );
}

void applicationInit()
{
    magneticlinear_spiDriverInit( (T_MAGNETICLINEAR_P)&_MIKROBUS1_GPIO, (T_MAGNETICLINEAR_P)&_MIKROBUS1_SPI );
}

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

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
        applicationTask();
    }
}