//
// Simple driver program to test the accelerometer API.
//
// BIT0 - red LED
// BIT6 - green LED
//
#include <msp430g2553.h>
#include "accel.h"

void main(void)
{
	// Stop watchdog timer
	WDTCTL = WDTPW + WDTHOLD;
	
	Accel_Init();
	
	// Enter LPM4 w/interrupt
	_BIS_SR(LPM4_bits + GIE);
}
