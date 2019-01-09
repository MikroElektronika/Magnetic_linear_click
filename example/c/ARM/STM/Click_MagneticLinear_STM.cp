#line 1 "D:/Clicks_git/M/Magnetic_linear_click/SW/example/c/ARM/STM/Click_MagneticLinear_STM.c"
#line 1 "d:/clicks_git/m/magnetic_linear_click/sw/example/c/arm/stm/click_magneticlinear_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/m/magnetic_linear_click/sw/example/c/arm/stm/click_magneticlinear_config.h"
#line 1 "d:/clicks_git/m/magnetic_linear_click/sw/example/c/arm/stm/click_magneticlinear_types.h"
#line 3 "d:/clicks_git/m/magnetic_linear_click/sw/example/c/arm/stm/click_magneticlinear_config.h"
const uint32_t _MAGNETICLINEAR_SPI_CFG[ 2 ] =
{
 _SPI_FPCLK_DIV256,
 _SPI_FIRST_CLK_EDGE_TRANSITION |
 _SPI_CLK_IDLE_LOW |
 _SPI_MASTER |
 _SPI_MSB_FIRST |
 _SPI_8_BIT |
 _SPI_SSM_ENABLE |
 _SPI_SS_DISABLE |
 _SPI_SSI_1
};
#line 1 "d:/clicks_git/m/magnetic_linear_click/sw/library/__magneticlinear_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 63 "d:/clicks_git/m/magnetic_linear_click/sw/library/__magneticlinear_driver.h"
void magneticlinear_spiDriverInit( const uint8_t*  gpioObj,  const uint8_t*  spiObj);
#line 73 "d:/clicks_git/m/magnetic_linear_click/sw/library/__magneticlinear_driver.h"
void magneticlinear_gpioDriverInit( const uint8_t*  gpioObj);
#line 82 "d:/clicks_git/m/magnetic_linear_click/sw/library/__magneticlinear_driver.h"
int16_t magneticlinear_readData();
#line 30 "D:/Clicks_git/M/Magnetic_linear_click/SW/example/c/ARM/STM/Click_MagneticLinear_STM.c"
void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );
 mikrobus_spiInit( _MIKROBUS1, &_MAGNETICLINEAR_SPI_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );
 mikrobus_logWrite("--- System Init ---", _LOG_LINE);
 Delay_ms( 100 );
}

void applicationInit()
{
 magneticlinear_spiDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_SPI );
}

void applicationTask()
{
 int16_t magneticData;
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
