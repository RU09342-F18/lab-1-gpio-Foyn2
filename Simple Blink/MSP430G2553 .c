#include <msp430.h> 


/**
 * The main.c file for the Simple Blink on the standard G2553 Board. 
 * Nolan Foy
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

	P1DIR |= BIT0; // ORs P1DIR with Bit 0 to set Bit 0 to be an output pin
	
	while(1) //Means while true. The loop will run infinitely unless another coded statement states otherwise
	{
	   P1OUT ^= BIT0; //Tells LED on pin 1.0 to turn on and off by XOR (flipping the bit between 0 and 1; ON and OFF)
	   __delay_cycles(500000); //Sets a toggle delay of 0.5 seconds
	}

	return 0;
}
