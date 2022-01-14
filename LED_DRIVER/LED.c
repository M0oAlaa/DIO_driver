#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "LED.h"
#include <util/delay.h>

/*Implementation of Turn led on function*/
void TurnLedON(uint8_t u8_port,uint8_t u8_pin)
{
	DIO_SETpinVal(u8_port,u8_pin,DIO_HIGH);
}

/*Implementation of Turn led off function*/
void TurnLedOFF(uint8_t u8_port,uint8_t u8_pin)
{
	DIO_SETpinVal(u8_port,u8_pin,DIO_LOW);
}

/*Implementation of blinking led function*/
void BlinkLed(uint8_t u8_port,uint8_t u8_pin,uf32_t time_ms)
{
	DIO_SETpinVal(u8_port,u8_pin,DIO_HIGH);
	_delay_ms(time_ms);
	DIO_SETpinVal(u8_port,u8_pin,DIO_LOW);
	_delay_ms(time_ms);
}

/*Implementation of toggling led function*/
void ToggleLED(uint8_t u8_port,uint8_t u8_pin)
{
	static uint8_t u8_state; //local variable to get the pin state
	DIO_GETpinVal(u8_port,u8_pin,&u8_state);
	/*Check if the led on or off & toggle the state*/
	if(u8_state==DIO_LOW)
	{
		u8_state=DIO_HIGH;
	}
	else if(u8_state==DIO_HIGH)
	{
		u8_state=DIO_LOW;
	}
	DIO_SETpinVal(u8_port,u8_pin,u8_state);
}
