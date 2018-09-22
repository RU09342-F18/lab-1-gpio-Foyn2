#include "msp.h"


/**
 * main.c
 */
void main(void) //sub main clock
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

	P1DIR |= BIT0; //sets bit 0 as an output pin

	while(1){//Infinite while loop
	    P1OUT ^= BIT0; //Flip flops the Led between a 1 and 0
	    _delay_cycles(500000); // Toggle delay of 0.5 seconds
	}
	return 0;
}
