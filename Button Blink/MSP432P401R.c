#include "msp.h"


/**
 * The main.c file for the Button Blink on the MSP432P401R Board
 * Nolan Foy
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer

	    P1DIR |= BIT0;  //Sets p1.0 as output pin
	    P1REN |= BIT1;  //The Resistor Enable is determined by button p1.3, sets the output of the button to 0 and the input to 1
	    P1OUT |= BIT1;  //sets resistance to a pull up resistor

	    while(1)//Infinite while loop
	    {

	        if((P1IN & BIT3) != BIT3){//Defines the condition of when the Led is on or off (if button is pressed or not pressed)
	        P1OUT ^= BIT0; // Tells Led to turn on or off (XOR) based on the preexisting condition of the button being pressed or not pressed

	        _delay_cycles(500000);//Sets toggle delay of 0.5 seconds. If button held, it starts to blink
	        }

	    }
   return 0;
}
