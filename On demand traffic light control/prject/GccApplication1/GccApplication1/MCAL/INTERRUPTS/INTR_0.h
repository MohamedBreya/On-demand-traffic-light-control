/*
 * INTR_0.h
 *
 * Created: 21/09/2022 12:45:35 ص
 *  Author: HOMOSA
 */ 


#ifndef INTR_0_H
#define INTR_0_H

#include "../REGISTERS/REG.h"

#define EXT_TNT_0 __vector_1
#define EXT_TNT_1 __vector_2
#define EXT_TNT_2 __vector_3

# define sei()  __asm__ __volatile__ ("sei" :::"memory")
# define cli()  __asm__ __volatile__ ("cli" :::"memory")

#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used)); \
void INT_VECT(void)


// INTR_0 config
#define ISC00 0
#define ISC01 1
#define INT0 6

void Enable_G_INTRS(void);
void Diable_G_INTRS(void);
void Init_INTR_0(void);





#endif /* INTERRUPTS_H_ */