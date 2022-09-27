#include "APP.h"



typedef enum EN_APP_ERROR
{
	INIT_APP_OK,INIT_APP_ERROR
}EN_APP_ERROR;

typedef enum STATE
{
	FALSE,TRUE
}STATE;


typedef enum LED_STATE
{
	RED,GREEN,YELLOW
}LED_STATE;


static LED_STATE LD_ST;
static LED_STATE LED_COLOR;
static STATE FLAG;
static uint8_t cycle;



static EN_APP_ERROR Init(void)
{
	// initialization
	
	
	if (LED_init(T_LED_RED_PORT,T_LED_RED_PIN)==LED_INIT_OK)
	{
		//Nothing
	}
	else
	{
		return INIT_APP_ERROR;
	}
	if (LED_init(T_LED_GREEN_PORT,T_LED_GREEN_PIN)==LED_INIT_OK)
	{
		//Nothing
	}
	else
	{
		return INIT_APP_ERROR;
	}
	if (LED_init(T_LED_YELLOW_PORT,T_LED_YELLOW_PIN)==LED_INIT_OK)
	{
		//Nothing
	}
	else
	{
		return INIT_APP_ERROR;
	}

	if (LED_init(W_LED_RED_PORT,W_LED_RED_PIN)==LED_INIT_OK)
	{
		//Nothing
	}
	else
	{
		return INIT_APP_ERROR;
	}
	if (LED_init(W_LED_GREEN_PORT,W_LED_GREEN_PIN)==LED_INIT_OK)
	{
		//Nothing
	}
	else
	{
		return INIT_APP_ERROR;
	}
	if (LED_init(W_LED_YELLOW_PORT,W_LED_YELLOW_PIN)==LED_INIT_OK)
	{
		//Nothing
	}
	else
	{
		return INIT_APP_ERROR;
	}
	
    //DIO_write(REQ_BUTTON_PIN,REQ_BUTTON_PORT,LOW);
	if (BUTTON_init(REQ_BUTTON_PORT,REQ_BUTTON_PIN)==BUTTON_INIT_OK)
	{
		//Nothing
	}
	else
	{
		return INIT_APP_ERROR;
	}
	
	Init_INTR_0();
	
	LED_COLOR=GREEN;
	FLAG=TRUE;
	cycle=0;
	return INIT_APP_OK;
}



static void Loop(void)
{
	// looping
	
	while(1)
	{
		if (FLAG==FALSE)
			cycle++;
		switch (LED_COLOR)
			{
				case GREEN:
				{
					LD_ST=YELLOW;
					LED_on(T_LED_GREEN_PORT,T_LED_GREEN_PIN);
					LED_on(W_LED_RED_PORT,W_LED_RED_PIN);
					TIMER_0_set(19531);  // 5 seconds
					LED_toggle(T_LED_GREEN_PORT,T_LED_GREEN_PIN);
					LED_toggle(W_LED_RED_PORT,W_LED_RED_PIN);
					
				}
				break;
				
				
				case YELLOW:
				{
					LD_ST=RED;
					int t=200;
					LED_on(T_LED_YELLOW_PORT,T_LED_YELLOW_PIN);
					while(t--)
					{
						LED_toggle_timer(W_LED_YELLOW_PORT,W_LED_YELLOW_PIN,97);
					}
					LED_toggle(T_LED_YELLOW_PORT,T_LED_YELLOW_PIN);
					LED_off(W_LED_YELLOW_PORT,W_LED_YELLOW_PIN);
					
				}
				break;
					
				case RED:
				{
					LD_ST=GREEN;
					LED_on(T_LED_RED_PORT,T_LED_RED_PIN);
					LED_on(W_LED_GREEN_PORT,W_LED_GREEN_PIN);
					TIMER_0_set(19531);  // 5 seconds
					LED_toggle(T_LED_RED_PORT,T_LED_RED_PIN);
					LED_toggle(W_LED_GREEN_PORT,W_LED_GREEN_PIN);
					
				}
				break;
				
				default:
				{
					// ......Nothing .....
				}
			}
		if((FLAG==FALSE)&&(cycle==3))
		{
			FLAG=TRUE;
			cycle=0;
			Diable_G_INTRS();
			Enable_G_INTRS();
		}
			
			
		LED_COLOR=LD_ST;
		
		
	}
}

void APP_start(void)
{
	if (Init()==INIT_APP_OK)
	{
		Loop();
	}
	else
	{
		//printf("ERROR!!!!");
	}
	
}




ISR(EXT_TNT_0)
{
	FLAG=FALSE;
	LED_COLOR=LD_ST;
	DIO_Reset();
	
	Loop();
}
