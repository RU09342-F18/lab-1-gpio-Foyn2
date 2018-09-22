# Simple Blink
In both .c files uploaded for simple blink, the watchdog timer in both microprocessors is turned off so that the microprocessor does not
reset (due to the firmware checking for normalcy)while the program is being ran. The direction register, P1DIR, is ORed with BIT0, which sets Bit0 to be an output for the LED. After that comes a simple while loop, in which P1OUT, or P1.0, is XOred with BIT0, telling the LED
to turn on and off.The toggle delay was set to 0.5 seconds, so that the blink could be easily seen by the human eye.
