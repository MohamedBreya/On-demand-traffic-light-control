/*
 * DIO_TEST.c
 *
 * Created: 25/09/2022 03:45:28 ص
 *  Author: HOMOSA
 */ 

#include "Dio.h"
#include "DIO_TEST.h"
void Dio_Test()
{
	 uint8_t X;
	 DIO_init(0,PORT_A,IN);
	 DIO_init(1,PORT_B,OUT);
	 DIO_write(1,PORT_B,HIGH);
	 DIO_init(1,PORT_C,OUT);
	 DIO_write(1,PORT_C,HIGH);
	 DIO_read(1,PORT_C,&X);
	 DIO_toggle(1,PORT_C);
	 DIO_Reset();
	
}