#ifndef APP_H
#define APP_H

#include "../ECUAL/BUTTON_Driver/BUtton.h"
#include "../ECUAL/LED_Driver/LED.h"
#include "../MCAL/TIMERS/TIMER_0/TIMER_0.h"
#include "../MCAL/INTERRUPTS/INTR_0.h"



#define T_LED_GREEN_PIN 1
#define T_LED_GREEN_PORT PORT_A
#define T_LED_YELLOW_PIN 2
#define T_LED_YELLOW_PORT PORT_A
#define T_LED_RED_PIN 3
#define T_LED_RED_PORT PORT_A



#define W_LED_GREEN_PIN 1
#define W_LED_GREEN_PORT PORT_B
#define W_LED_YELLOW_PIN 2
#define W_LED_YELLOW_PORT PORT_B
#define W_LED_RED_PIN 3
#define W_LED_RED_PORT PORT_B

#define REQ_BUTTON_PIN 2
#define REQ_BUTTON_PORT PORT_D




void APP_start(void);


#endif