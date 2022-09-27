/*
 * TIMER_0_TEST.c
 *
 * Created: 25/09/2022 02:55:26 م
 *  Author: HOMOSA
 */ 

#include "TIMER_0_TEST.h"
#include "TIMER_0.h"
void Timer_0_Test(void)
{

	TIMER_0_set(1953);

	
	Reset_Timer_0();
}