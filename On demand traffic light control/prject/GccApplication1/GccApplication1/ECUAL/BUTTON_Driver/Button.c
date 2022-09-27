#include "BUtton.h"


EN_BUTTON_ERROR BUTTON_init(uint8_t buttonPort,uint8_t buttonPin)
{
	/*
		skeleton :
			This Function initialize the button (Make the DIO as an input)
			It take button port and button pin as parameters and return Nothing
	*/
	switch (buttonPort)
		{
			case PORT_A:
			{
				if (buttonPin<0||buttonPin>7)
				{
					return BUTTON_PIN_ERROR;
				}
				else
				{
					DIO_init(buttonPin,buttonPort,IN);
					return BUTTON_INIT_OK;
				}
				break;
			}
			
			case PORT_B:
			{
				if (buttonPin<0||buttonPin>7)
				{
					return BUTTON_PIN_ERROR;
				}
				else
				{
					DIO_init(buttonPin,buttonPort,IN);
					return BUTTON_INIT_OK;
				}
				break;
			}
			
			case PORT_C:
			{
				if (buttonPin<0||buttonPin>7)
				{
					return BUTTON_PIN_ERROR;
				}
				else
				{
					DIO_init(buttonPin,buttonPort,IN);
					return BUTTON_INIT_OK;
				}
				break;
			}
			
			case PORT_D:
			{
				if (buttonPin<0||buttonPin>7)
				{
					return BUTTON_PIN_ERROR;
				}
				else
				{
					DIO_init(buttonPin,buttonPort,IN);
					return BUTTON_INIT_OK;
				}
				break;
			}
			
			default:
			{
				return BUTTON_PORT_ERROR;
				break;
			}
		}
				

}


EN_BUTTON_ERROR BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value)
{
	/*
		skeleton :
			This Function Read the value in button and store it in a variable
			It take button port and button pin and pointer as parameters  return Nothing
	*/
	switch (buttonPort)
		{
			case PORT_A:
			{
				if (buttonPin<0||buttonPin>7)
				{
					return BUTTON_PIN_ERROR;
				}
				else
				{
					DIO_read(buttonPin,buttonPort,value);
					return BUTTON_OK;
				}
				break;
			}
			
			case PORT_B:
			{
				if (buttonPin<0||buttonPin>7)
				{
					return BUTTON_PIN_ERROR;
				}
				else
				{
					DIO_read(buttonPin,buttonPort,value);
					return BUTTON_OK;
				}
				break;
			}
			
			case PORT_C:
			{
				if (buttonPin<0||buttonPin>7)
				{
					return BUTTON_PIN_ERROR;
				}
				else
				{
					DIO_read(buttonPin,buttonPort,value);
					return BUTTON_OK;
				}
				break;
			}
			
			case PORT_D:
			{
				if (buttonPin<0||buttonPin>7)
				{
					return BUTTON_PIN_ERROR;
				}
				else
				{
					DIO_read(buttonPin,buttonPort,value);
					return BUTTON_OK;
				}
				break;
			}
			
			default:
			{
				return BUTTON_PORT_ERROR;
				break;
			}
		}
				
		   
}