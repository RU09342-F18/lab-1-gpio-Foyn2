#include "msp.h"


/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

	P1DIR |= BIT0; //Sets Bit 0 as output pin

	P2DIR |= BIT0; //sets bit 0 from P2.0 as output pin

	for(;;) //this will loop infinitely
	    {
	        volatile unsigned int a, b;

	        a++; //Counts i by 1
	        b++; //Counts j by 1

	        if(a>7000){//Controls blink rate for 1.0 Led; counts up to this number
	            a = 0;
	            P1OUT ^= BIT0; //Tells led to turn on and off (0 and 1)
	        }

	        if(b>70000)//Controls blink rate for 1.6 Led; counts up to this number
	        {
	            b = 0;
	            P2OUT ^= BIT0; //Tells Led to turn on and off (0 and 1)

	        }
	    }
	return 0;
}
