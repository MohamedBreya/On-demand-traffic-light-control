/*
 * INTR_0_TEST.c
 *
 * Created: 25/09/2022 02:41:33 م
 *  Author: HOMOSA
 */ 
#include "INTR_0_TEST.h"
#include "INTR_0.h"

void INTR_0_Test(void)
{
	Enable_G_INTRS();
	Diable_G_INTRS();
	Init_INTR_0();
}