#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer

	P1DIR |= BIT0; //Sets Bit 0 to be an output pin
	
	while(1) //Means while true. The loop will run infinitely unless stated otherwise
	{
	   P1OUT ^= BIT0; //Tells Led to turn on and off by XOR (flipping the bit between 0 and 1; ON and OFF)
	   __delay_cycles(500000); //Sets a toggle delay of 0.5 seconds
	}

	return 0;
}
