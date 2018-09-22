# Off Board Blink
The off board blink portion of the lab involved demonstrating the functionality of the microprocessor on a breadboard with standard LEDs. To do this, the G2553 processor chip itself was taken out of the board and set up on a breadboard. Instead of using a standard multimeter power source, the G2553 board was used, with the connection of power at 3.3 V and the connection of ground to the GND pin. Through use of the datasheet, three red LEDs were set up and wired to the output pins (1.0, 1.6, 2.2) previously programmed in the chip. Resistors of 1k were used for each. To set up the reset, a capacitor and resistor were hooked up, with the resistor going to Vcc and the capacitor going to ground. In between them was the junction where the reset pin was connected.

The Multiple Blink code was used for this Off-board Blink demonstration. Because another Led was used, another variable was created and incremented in the for loop.

Giphy Links: https://gph.is/2xF1mY0
             https://media.giphy.com/media/64CyAs9eSvpo2pDVUS/giphy.gif

