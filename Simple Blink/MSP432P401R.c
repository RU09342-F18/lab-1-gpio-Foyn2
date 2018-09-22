#include "msp.h"


/**
 * The main.c file for the Simple Blink on the MSP432P401R board
 * Nolan Foy
 */
void main(void) //sub main clock
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

	P1DIR |= BIT0; //ORs P1DIR (Direction Register) with bit 0 to set bit 0 as an output pin

	while(1){ // Means while true, indicating an infinite while loop
	    P1OUT ^= BIT0; //Flip flops the LED between a 1 and 0 by virtue of XOR
	    _delay_cycles(500000); // Toggle delay of 0.5 seconds
	}
	return 0;
}
