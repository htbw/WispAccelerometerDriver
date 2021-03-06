//
// Simple driver program to test the accelerometer API.
//
#include <msp430g2553.h>
#include "accel.h"

void main(void)
{
	// Stop watchdog timer
	WDTCTL = WDTPW + WDTHOLD;
	
	Accel_Init();
	
	int16_t x, y, z;
	Accel_Read(&x, &y, &z);
	
	// Enter LPM4 w/interrupt
	_BIS_SR(LPM4_bits + GIE);
}
