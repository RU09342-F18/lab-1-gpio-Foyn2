#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	P1DIR |= (BIT0|BIT6); //Assigns bits 0 and 6 to be output pins
	P2DIR |= BIT2; //Assigns bit 2 as output pin


	    for(;;) //this will loop infinitely
	    {
	        volatile unsigned int a, b, c; //TBD

	        a++; //Counts a by 1
	        b++; //Counts b by 1
	        c++; //counts c by 1

	        if(a>3000){//Controls blink rate for 1.0 Led; counts up to this number
	            a = 0; //Sets a to start at 0
	            P1OUT ^= BIT0; //Tells led to turn on and off (0 and 1)
	            P2OUT ^= BIT2; //
	        }

	        if(b>30000)//Controls blink rate for 1.6 Led; counts up to this number
	        {
	            b = 0; //Sets b to start at 0
	            P1OUT ^= BIT6; //Tells Led to turn on and off (0 and 1)

	        }

	        if(c>500000)//Controls blink rate for 2.2 Led;
	        {
	            c = 0;
	            P2OUT ^= BIT2;
	        }

	    }
  return 0;
}

