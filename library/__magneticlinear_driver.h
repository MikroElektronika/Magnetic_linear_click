/*
    __magneticlinear_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __magneticlinear_driver.h
@brief    MagneticLinear Driver
@mainpage MagneticLinear Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   MAGNETICLINEAR
@brief      MagneticLinear Click Driver
@{

| Global Library Prefix | **MAGNETICLINEAR** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **nov 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _MAGNETICLINEAR_H_
#define _MAGNETICLINEAR_H_

/** 
 * @macro T_MAGNETICLINEAR_P
 * @brief Driver Abstract type 
 */
#define T_MAGNETICLINEAR_P    const uint8_t*

/** @defgroup MAGNETICLINEAR_COMPILE Compilation Config */              /** @{ */

   #define   __MAGNETICLINEAR_DRV_SPI__                            /**<     @macro __MAGNETICLINEAR_DRV_SPI__  @brief SPI driver selector */
//  #define   __MAGNETICLINEAR_DRV_I2C__                            /**<     @macro __MAGNETICLINEAR_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __MAGNETICLINEAR_DRV_UART__                           /**<     @macro __MAGNETICLINEAR_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */

#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup MAGNETICLINEAR_INIT Driver Initialization */              /** @{ */

#ifdef   __MAGNETICLINEAR_DRV_SPI__
void magneticlinear_spiDriverInit(T_MAGNETICLINEAR_P gpioObj, T_MAGNETICLINEAR_P spiObj);
#endif
#ifdef   __MAGNETICLINEAR_DRV_I2C__
void magneticlinear_i2cDriverInit(T_MAGNETICLINEAR_P gpioObj, T_MAGNETICLINEAR_P i2cObj, uint8_t slave);
#endif
#ifdef   __MAGNETICLINEAR_DRV_UART__
void magneticlinear_uartDriverInit(T_MAGNETICLINEAR_P gpioObj, T_MAGNETICLINEAR_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void magneticlinear_gpioDriverInit(T_MAGNETICLINEAR_P gpioObj);
                                                                       /** @} */
/** @defgroup MAGNETICLINEAR_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions reads Magnetics Linear data
 *
 * @return  2 bytes - Magnetics Linear data
 */
uint16_t magneticlinear_readData();






                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_MagneticLinear_STM.c
    @example Click_MagneticLinear_TIVA.c
    @example Click_MagneticLinear_CEC.c
    @example Click_MagneticLinear_KINETIS.c
    @example Click_MagneticLinear_MSP.c
    @example Click_MagneticLinear_PIC.c
    @example Click_MagneticLinear_PIC32.c
    @example Click_MagneticLinear_DSPIC.c
    @example Click_MagneticLinear_AVR.c
    @example Click_MagneticLinear_FT90x.c
    @example Click_MagneticLinear_STM.mbas
    @example Click_MagneticLinear_TIVA.mbas
    @example Click_MagneticLinear_CEC.mbas
    @example Click_MagneticLinear_KINETIS.mbas
    @example Click_MagneticLinear_MSP.mbas
    @example Click_MagneticLinear_PIC.mbas
    @example Click_MagneticLinear_PIC32.mbas
    @example Click_MagneticLinear_DSPIC.mbas
    @example Click_MagneticLinear_AVR.mbas
    @example Click_MagneticLinear_FT90x.mbas
    @example Click_MagneticLinear_STM.mpas
    @example Click_MagneticLinear_TIVA.mpas
    @example Click_MagneticLinear_CEC.mpas
    @example Click_MagneticLinear_KINETIS.mpas
    @example Click_MagneticLinear_MSP.mpas
    @example Click_MagneticLinear_PIC.mpas
    @example Click_MagneticLinear_PIC32.mpas
    @example Click_MagneticLinear_DSPIC.mpas
    @example Click_MagneticLinear_AVR.mpas
    @example Click_MagneticLinear_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __magneticlinear_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */