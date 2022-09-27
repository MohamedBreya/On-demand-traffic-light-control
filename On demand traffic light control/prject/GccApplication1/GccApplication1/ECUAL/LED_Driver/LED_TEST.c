/*
 * LED_TEST.c
 *
 * Created: 25/09/2022 03:11:14 م
 *  Author: HOMOSA
 */ 


#include "LED_TEST.h"
#include "LED.h"

#define LED_TEST_PORT PORT_A
#define LED_TEST_PIN 3 
void Led_Test(void)
{
	LED_init(LED_TEST_PORT,LED_TEST_PIN);
	LED_on(LED_TEST_PORT,LED_TEST_PIN);
	LED_off(LED_TEST_PORT,LED_TEST_PIN);
	LED_toggle(LED_TEST_PORT,LED_TEST_PIN);
}
