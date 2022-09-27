#ifndef BUTTON_H
#define BUTTON_H

#include "../../MCAL/DIO/Dio.h"

typedef enum EN_BUTTON_ERROR
{
	BUTTON_OK,BUTTON_PORT_ERROR,BUTTON_PIN_ERROR,BUTTON_INIT_OK
}EN_BUTTON_ERROR;

EN_BUTTON_ERROR BUTTON_init(uint8_t buttonPort,uint8_t buttonPin);
EN_BUTTON_ERROR BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value);


#endif