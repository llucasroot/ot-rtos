/**
*
*
**************************************************************************
* Copyright (C) 2015 Bosch Sensortec GmbH. All Rights Reserved.
*
* File:		gpio_support.h
*
* Date:		2015/01/30
*
* Revision:	1.0
*
* Usage:	Part of BNO055 Xplained Pro - Data Stream Pro Project
*
**************************************************************************
* \section License
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
*   Redistributions of source code must retain the above copyright
*   notice, this list of conditions and the following disclaimer.
*
*   Redistributions in binary form must reproduce the above copyright
*   notice, this list of conditions and the following disclaimer in the
*   documentation and/or other materials provided with the distribution.
*
*   Neither the name of the copyright holder nor the names of the
*   contributors may be used to endorse or promote products derived from
*   this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDER
* OR CONTRIBUTORS BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
* OR CONSEQUENTIAL DAMAGES(INCLUDING, BUT NOT LIMITED TO,
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
* WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
* ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE
*
* The information provided is believed to be accurate and reliable.
* The copyright holder assumes no responsibility
* for the consequences of use
* of such information nor for any infringement of patents or
* other rights of third parties which may result from its use.
* No license is granted by implication or otherwise under any patent or
* patent rights of the copyright holder.
*
*
*************************************************************************/
/*!
*
* @file		gpio_support.h
* @author	Ehsan Mohaimeni
*
* @brief	GPIO ASF Drivers Support Header File
*
* GPIO support uses ASF I/O and GPIO driver modules and defines
* initialization and configuration functions for the microcontroller�s
* general purpose I/O pins that are needed for different functionalities.
*
*
*/

#ifndef GPIO_SUPPORT_H_
#define GPIO_SUPPORT_H_

/************************************************************************/
/**\name Includes                                                       */
/************************************************************************/

#include "pinmux.h"
#include "port.h"
#include "samd21_xplained_pro.h"

/************************************************************************/
/**\name Function Prototype Declaration                                 */
/************************************************************************/

/*!
* @brief		Initializes the GPIO pins of the MCU
*
* @param[in]	NULL
*
* @param[out]	NULL
*
* @return		NULL
*
*/
void gpio_initialize(void);

/*!
* @brief		Configures EXT1_PIN_5 pin as a GPIO
*
* @param[in]	NULL
*
* @param[out]	NULL
*
* @return		NULL
*
*/
void gpio_configure_ext1_pin_5(void);

/*!
* @brief		Configures EXT1_PIN_6 pin as a GPIO
*
* @param[in]	NULL
*
* @param[out]	NULL
*
* @return		NULL
*
*/
void gpio_configure_ext1_pin_6(void);

/*!
* @brief		Configures EXT1_PIN_10 pin as a GPIO
*
* @param[in]	NULL
*
* @param[out]	NULL
*
* @return		NULL
*
*/
void gpio_configure_ext1_pin_10(void);

/*!
* @brief		Configures EXT1_PIN_15 pin as a GPIO
*
* @param[in]	NULL
*
* @param[out]	NULL
*
* @return		NULL
*
*/
void gpio_configure_ext1_pin_15(void);



#endif /* GPIO_SUPPORT_H_ */