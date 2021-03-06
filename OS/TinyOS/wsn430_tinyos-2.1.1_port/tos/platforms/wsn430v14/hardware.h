/**
 * Modified by Guillaume Schreiner - LSIIT.
 */
// Modified 06/03/2012 by LASLA Noureddine (lnoureddine4@gmail.com)

#ifndef _H_hardware_h
#define _H_hardware_h

#include "msp430hardware.h"

// enum so components can override power saving,
// as per TEP 112.
enum {
    TOS_SLEEP_NONE = MSP430_POWER_ACTIVE,
};

// LEDs
TOSH_ASSIGN_PIN(RED_LED,    5, 4);
TOSH_ASSIGN_PIN(GREEN_LED,  5, 5);
TOSH_ASSIGN_PIN(YELLOW_LED, 5, 6);

// CC2420 RADIO #defines


TOSH_ASSIGN_PIN(RADIO_CSN,       4, 2);
TOSH_ASSIGN_PIN(RADIO_VREF,      3, 0);
TOSH_ASSIGN_PIN(RADIO_RESET,     1, 7);

TOSH_ASSIGN_PIN(RADIO_FIFOP,     1, 4);
TOSH_ASSIGN_PIN(RADIO_SFD,       1, 5);
TOSH_ASSIGN_PIN(RADIO_GIO0,      1, 3);
TOSH_ASSIGN_PIN(RADIO_FIFO,      1, 3);
TOSH_ASSIGN_PIN(RADIO_GIO1,      1, 6);
TOSH_ASSIGN_PIN(RADIO_CCA,       1, 6);

TOSH_ASSIGN_PIN(CC_FIFOP,        1, 4);
TOSH_ASSIGN_PIN(CC_FIFO,         1, 3);
TOSH_ASSIGN_PIN(CC_SFD,          1, 5);
TOSH_ASSIGN_PIN(CC_VREN,         3, 0);
TOSH_ASSIGN_PIN(CC_RSTN,         1, 7);

// ADC lines on the testpoints
TOSH_ASSIGN_PIN(ADC0, 6, 0);
TOSH_ASSIGN_PIN(ADC1, 6, 1);
TOSH_ASSIGN_PIN(ADC2, 6, 2);
TOSH_ASSIGN_PIN(ADC3, 6, 3);
TOSH_ASSIGN_PIN(ADC4, 6, 4);
TOSH_ASSIGN_PIN(ADC5, 6, 5);

// USART pins
// SPI1 (attached to cc2420)
TOSH_ASSIGN_PIN(UCLK1, 5, 3);
TOSH_ASSIGN_PIN(SOMI1, 5, 2);
TOSH_ASSIGN_PIN(SIMO1, 5, 1);

// SPI0 (not used)
TOSH_ASSIGN_PIN(UCLK0, 3, 3);
TOSH_ASSIGN_PIN(SOMI0, 3, 2);
TOSH_ASSIGN_PIN(SIMO0, 3, 1);

// UART0 (printf)
TOSH_ASSIGN_PIN(UTXD0, 3, 4);
TOSH_ASSIGN_PIN(URXD0, 3, 5);

// UART1 (not used)
TOSH_ASSIGN_PIN(UTXD1, 3, 6);
TOSH_ASSIGN_PIN(URXD1, 3, 7);

// 1-Wire
TOSH_ASSIGN_PIN(ONEWIRE, 2, 4);

// FLASH
TOSH_ASSIGN_PIN(FLASH_PWR, 1, 2); // 'W' in fact
TOSH_ASSIGN_PIN(FLASH_CS, 4, 4);
TOSH_ASSIGN_PIN(FLASH_HOLD, 4, 7);

#endif // _H_hardware_h
