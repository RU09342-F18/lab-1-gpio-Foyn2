#include "msp.h"


/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

	P1DIR |= BIT0;  //Sets p1.0 as output pin
	    P1REN |= BIT1;  //The Resistor Enable is determined by button p1.3, sets the output of the button to 0 and
	    P1OUT |= BIT1;  //sets resistance to a pull up resistor

	    while(1)
	    {

	        if((P1IN & BIT3) != BIT3){
	        P1OUT ^= BIT0;

	        _delay_cycles(500000);//Sets toggle delay of 0.5 seconds. If button held, it starts to blink
	        }

	    }
   return 0;
}
