#include "LED.h"
#include "../../MCAL/TIMERS/TIMER_0/TIMER_0.h"
EN_LED_ERROR LED_init(uint8_t ledPort,uint8_t ledPin)
{
	/*
		skeleton :
			This Function initialize the Led (Make the DIO as an output)
			It take led port and led pin as parameters and return LED_PORT_ERROR or LED_PIN_ERROR or LED_INIT_OK
	*/
	
	switch (ledPort)
	{
		case PORT_A:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
				DIO_init(ledPin,ledPort,OUT);
				return LED_INIT_OK;
			}
			break;
		}
		
		case PORT_B:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
				DIO_init(ledPin,ledPort,OUT);
				return LED_INIT_OK;
			}
			break;
		}
		
		case PORT_C:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
				DIO_init(ledPin,ledPort,OUT);
				return LED_INIT_OK;
			}
			break;
		}
		
		case PORT_D:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
				DIO_init(ledPin,ledPort,OUT);
				return LED_INIT_OK;
			}
			break;
		}
		
		default:
		{
			return LED_PORT_ERROR;
			break;
		}
		
	}
    
}


EN_LED_ERROR LED_on(uint8_t ledPort,uint8_t ledPin)
{
	/*
		skeleton :
			This Function make the Led on
			It take led port and led pin as parameters and return LED_OK or LED_PORT_ERROR or LED_PIN_ERROR
	*/
	
	switch (ledPort)
	{
		case PORT_A:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_write(ledPin,ledPort,HIGH);
			return LED_OK;
			}
			break;
		}
		
		case PORT_B:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_write(ledPin,ledPort,HIGH);
			return LED_OK;
			}
			break;
		}
		
		case PORT_C:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_write(ledPin,ledPort,HIGH);
			return LED_OK;
			}
			break;
		}
		
		case PORT_D:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_write(ledPin,ledPort,HIGH);
			return LED_OK;
			}
			break;
		}
		
		default:
		{
			return LED_PORT_ERROR;
			break;
		}
		
	}
	
}


EN_LED_ERROR LED_off(uint8_t ledPort,uint8_t ledPin)
{
	/*
		skeleton :
			This Function make the Led off
			It take led port and led pin as parameters and return LED_OK or LED_PORT_ERROR or LED_PIN_ERROR
	*/

	switch (ledPort)
	{
		case PORT_A:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_write(ledPin,ledPort,LOW);
			return LED_OK;
			}
			break;
		}
		
		case PORT_B:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_write(ledPin,ledPort,LOW);
			return LED_OK;
			}
			break;
		}
		
		case PORT_C:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_write(ledPin,ledPort,LOW);
			return LED_OK;
			}
			break;
		}
		
		case PORT_D:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_write(ledPin,ledPort,LOW);
			return LED_OK;
			}
			break;
		}
		
		default:
		{
			return LED_PORT_ERROR;
			break;
		}
		
	}
	

	   
}


EN_LED_ERROR LED_toggle(uint8_t ledPort,uint8_t ledPin)
{
	/*
		skeleton :
			This Function toggle the Led state
			It take led port and led pin as parameters and return LED_OK or LED_PORT_ERROR or LED_PIN_ERROR
	*/

	switch (ledPort)
	{
		case PORT_A:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_toggle( ledPin,ledPort);
			return LED_OK;
			}
			break;
		}
		
		case PORT_B:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_toggle( ledPin,ledPort);
			return LED_OK;
			}
			break;
		}
		
		case PORT_C:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_toggle( ledPin,ledPort);
			return LED_OK;
			}
			break;
		}
		
		case PORT_D:
		{
			if (ledPin<0||ledPin>7)
			{
				return LED_PIN_ERROR;
			}
			else
			{
			DIO_toggle( ledPin,ledPort);
			return LED_OK;
			}
			break;
		}
		
		default:
		{
			return LED_PORT_ERROR;
			break;
		}
		
	}
	  
}


EN_LED_ERROR LED_toggle_timer(uint8_t ledPort,uint8_t ledPin,uint32_t overflow)
{
	/*
		skeleton :
			This Function toggle the Led state for period of time
			It take led port and led pin and number of overflows(time) as parameters and return LED_OK or LED_PORT_ERROR or LED_PIN_ERROR
	*/
	
	if (LED_toggle(ledPort,ledPin)==LED_OK)
	{
		TIMER_0_set(overflow);
		return LED_OK;
	}
	else
	{
		return LED_TOGGLE_TIMER_ERROR;
	}
	
}