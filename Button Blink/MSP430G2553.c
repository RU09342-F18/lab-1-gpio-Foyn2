#include <msp430.h> 


/**
 * The main.c file for the Button Blink on the standard G2553 Board
 * Nolan Foy
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	P1DIR |= BIT0;  //Sets p1.0 as output pin
	P1REN |= BIT3;  //The Resistor Enable is determined by button p1.3, sets the output of the button to 0 and the input to 1
	P1OUT |= BIT3;  //sets resistance to a pull up resistor

	while(1) //Infinite while loop
	{

	    if((P1IN & BIT3) != BIT3){ //Defines the condition of when the Led is on or off (if button is pressed or not pressed)
	    P1OUT ^= BIT0; //Tells led to turn on and off (0 or 1) via Exclusive OR

	    _delay_cycles(500000);//Sets toggle delay of 0.5 seconds. If button held, it starts to blink
	    }

	}
	return 0;
}


