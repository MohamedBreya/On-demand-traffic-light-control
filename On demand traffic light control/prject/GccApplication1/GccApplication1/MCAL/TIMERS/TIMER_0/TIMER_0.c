#include "TIMER_0.h"


void TIMER_0_init(void)
{
	/* skeleton:
			This function initialize the Timer 0 
			put it in normal mode
			and set initial value 0x00 for it
			It take Nothing as a parameter and return Nothing
	*/
    TCCR0=0x00; // Normal Mode
    TCNT0=0x00; // set initial value

}

void Stop_timer_0(void)
{
	/* skeleton:
			This function Stops the Timer
			It takes Nothing and return Nothing
	*/
	TCCR0=0x00;
}


void TIMER_0_set(uint32_t numberOfOverflows)
{
	/*
		skeleton:
			This function start the timer 
			and stop it after it satisfy the time you need
			This function take unsigned integer as parameter and return Nothing
	*/
    TIMER_0_init();
    int counter =0;

    // timer start ---> setting prescaler
    TCCR0|=(1<<0); // No prescaler
	
    while(counter<numberOfOverflows)
    {
        // stop after one overflow ------> after 256 micro second
        // wait until overflow flag to be set
        while ((TIFR&(1<<0))==0);
        // Clear the overflow flag
        TIFR|=(1<<0);
        counter++;
    }
    // stop timer
	Stop_timer_0();  
}


void Reset_Timer_0(void)
{
	/* skeleton :
			This function Reset the timer
			at first check if there is overflow if yes int reset the TIFR flag and initialize the timer
			if No it stops the timer and initialize it
	*/
	if((TIFR&(1<<0))==1)
	{
		TIFR|=(1<<0);
		TIMER_0_init();
	}
	else
	{
		TIMER_0_init();
	}
}


