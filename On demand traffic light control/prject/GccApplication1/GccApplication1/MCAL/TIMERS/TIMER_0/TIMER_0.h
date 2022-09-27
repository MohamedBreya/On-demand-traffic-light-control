#ifndef TIMER_0_H
#define TIMER_0_H
#include "../../REGISTERS/REG.h"


void TIMER_0_init(void);
void Stop_timer_0(void);
void TIMER_0_set(uint32_t numberOfOverflows);
void Reset_Timer_0(void);


#endif