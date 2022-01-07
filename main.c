#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "LED.h"
#include<util/delay.h>

#define Debouncing_Time	25 //define a macro of debouncing time

int main(void)
{
	DIO_SETpinDir(DIO_PORTB,DIO_PIN2,DIO_INPUT);// define the button as an input
	DIO_SETpinDir(DIO_PORTB,DIO_PIN4,DIO_OUTPUT);// define the led as an output
	uint8_t u8_retVal;// define a value to hold the button state
	uint8_t u8_previous=NOK;// define a variables to hold the previous button's state
	while(1)
	{
		_delay_ms(Debouncing_Time);// to prevent button bouncing
		/*code to toggle the led state after each button press*/
		if(DIO_GETpinVal(DIO_PORTB,DIO_PIN2,&u8_retVal)==OK)
		{
			if(u8_retVal==OK && u8_previous==NOK)
			{
				ToggleLED(DIO_PORTB,DIO_PIN4);
			}
			u8_previous=u8_retVal;
		}
		else
		{

		}

	}
	return 0;
}
