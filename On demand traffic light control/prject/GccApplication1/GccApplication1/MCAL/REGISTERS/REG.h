#ifndef REG_H
#define REG_H

#include "../../Serving_Data_Types/Data_Types.h"
//PORT A
#define PORTA (*((volatile uint8_t *)0x3B))
#define DDRA (*((volatile uint8_t *)0x3A))
#define PINA (*((volatile uint8_t *)0x39))

//PORT B
#define PORTB (*((volatile uint8_t *)0x38))
#define DDRB (*((volatile uint8_t *)0x37))
#define PINB (*((volatile uint8_t *)0x36))

//PORT C
#define PORTC (*((volatile uint8_t *)0x35))
#define DDRC (*((volatile uint8_t *)0x34))
#define PINC (*((volatile uint8_t *)0x33))

//PORT D
#define PORTD (*((volatile uint8_t *)0x32))
#define DDRD (*((volatile uint8_t *)0x31))
#define PIND (*((volatile uint8_t *)0x30))


//TIMER 0 REG
#define TCCR0 (*((volatile uint8_t *)0x53))
#define TCNT0 (*((volatile uint8_t *)0x52))
#define TIFR (*((volatile uint8_t *)0x58))

// INTERRUPTS

#define MCUCR (*((volatile uint8_t *)0x55))
#define GICR (*((volatile uint8_t *)0x5B))

#endif

