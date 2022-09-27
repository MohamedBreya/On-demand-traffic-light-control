/*
 * BUTTON_TEST.c
 *
 * Created: 25/09/2022 05:07:37 م
 *  Author: HOMOSA
 */ 
#include "BUTTON_TEST.h"
#include "BUtton.h"

#define BUTTON_TEST_PORT PORT_C
#define BUTTON_TEST_PIN 1

void Button_Test(void)
{
	 uint8_t test;
	 BUTTON_init(BUTTON_TEST_PORT,BUTTON_TEST_PIN);
	 BUTTON_read(BUTTON_TEST_PORT,BUTTON_TEST_PIN,&test);
}