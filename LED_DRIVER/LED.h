#ifndef _LED_H_
#define _LED_H_

/*Declaration of Turn led on function*/
void TurnLedON(uint8_t u8_port,uint8_t u8_pin);

/*Declaration of Turn led off function*/
void TurnLedOFF(uint8_t u8_port,uint8_t u8_pin);

/*Declaration of blinking led function*/
void BlinkLed(uint8_t u8_port,uint8_t u8_pin,uf32_t time_ms);

/*Declaration of toggling led state function*/
void ToggleLED(uint8_t u8_port,uint8_t u8_pin);

#endif
