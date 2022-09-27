#ifndef LED_H
#define LED_H

#include "../../MCAL/DIO/Dio.h"

typedef enum EN_LED_ERROR
{
	LED_OK,LED_PORT_ERROR,LED_PIN_ERROR,LED_INIT_OK,LED_TOGGLE_TIMER_ERROR
}EN_LED_ERROR;

EN_LED_ERROR LED_init(uint8_t ledPort,uint8_t ledPin);
EN_LED_ERROR LED_on(uint8_t ledPort,uint8_t ledPin);
EN_LED_ERROR LED_off(uint8_t ledPort,uint8_t ledPin);
EN_LED_ERROR LED_toggle(uint8_t ledPort,uint8_t ledPin);
EN_LED_ERROR LED_toggle_timer(uint8_t ledPort,uint8_t ledPin,uint32_t overflow);

#endif