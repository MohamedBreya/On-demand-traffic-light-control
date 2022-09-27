/*
 * INTR_0.c
 *
 * Created: 21/09/2022 12:59:54 ص
 *  Author: HOMOSA
 */ 

#include "INTR_0.h"

void Enable_G_INTRS(void)
{
	/*
		skeleton :
			This function Enable global interrupts
			by setting bit 7 in the status register to 1 using sei() macro
			This function Takes Nothing as a parameter and return Nothing
	*/
	sei();
}

void Diable_G_INTRS(void)
{
	/*
		skeleton :
			This function Disable global interrupts
			by setting bit 7 in the status register to 0 using cli() macro
			This function Takes Nothing as a parameter and return Nothing
    */
	cli();
}

void Init_INTR_0(void)
{
	/*
		skeleton :
			This function initialize interrupt 0
			and choose the external interrupt sense then Enable External Interrupt 0
			This function Takes Nothing as a parameter and return Nothing
    */
	//Enable global interrupts ------> setting bit 7 in the status register to 1
	Enable_G_INTRS();

	// choose the external interrupt sense ---->sense on rising edge
	MCUCR|=(1<<ISC00)| (1<<ISC01);

	// Enable External Interrupt 0 ----->  INT0
	GICR |= (1<<INT0);

}



