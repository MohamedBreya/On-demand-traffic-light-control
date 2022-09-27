#include "Dio.h"

void DIO_init(uint8_t pinNumber,uint8_t portNumber,uint8_t direction)
{
	/* skeleton:
			initialize the (GPIO "DIO") 
			Check the port and the pin and put its direction
			this function takes port Number and Pin Number and the direction
	*/
    switch (portNumber)
    {
        case PORT_A:
            if(direction==IN)
            {
                DDRA&=~(1<<pinNumber);
            }
            else if(direction==OUT)
            {
                DDRA|=(1<<pinNumber);
            }
            else
            {
                //..... Error .......
            }
            break;

        case PORT_B:
            if(direction==IN)
            {
                DDRB&=~(1<<pinNumber);
            }
            else if(direction==OUT)
            {
                DDRB|=(1<<pinNumber);
            }
            else
            {
                //...... Error......
            }
            break;

        case PORT_C:
            if(direction==IN)
            {
                DDRC&=~(1<<pinNumber);
            }
            else if(direction==OUT)
            {
                DDRC|=(1<<pinNumber);
            }
            else
            {
                //....... Error......
            }
            break;
        case PORT_D:
            if(direction==IN)
            {
                DDRD&=~(1<<pinNumber);
            }
            else if(direction==OUT)
            {
                DDRD|=(1<<pinNumber);
            }
            else
            {
                //...... Error ......
            }
            break;
		default:
		{
			// ...... Error ......
		}
		
    }
}
void DIO_write(uint8_t pinNumber,uint8_t portNumber,uint8_t value)
{
	/* skeleton:
			Write in  (GPIO "DIO") LOW or High
			Check the port and the pin and put the value you wanted to write (LOW or High)
			this function takes port Number and Pin Number and the direction and the Value
	*/
    switch (portNumber)
    {
        case PORT_A:
            if(value==LOW)
            {
               PORTA&=~(1<<pinNumber);
            }
            else if(value==HIGH)
            {
                PORTA|=(1<<pinNumber);
            }
            else
            {
                //........ Error ......
            }
            break;


        case PORT_B:
            if(value==LOW)
            {
                PORTB&=~(1<<pinNumber);
            }
            else if(value==HIGH)
            {
                PORTB|=(1<<pinNumber);
            }
            else
            {
                //......... Error .......
            }
            break;

        case PORT_C:
            if(value==LOW)
            {
                PORTC&=~(1<<pinNumber);
            }
            else if(value==HIGH)
            {
                PORTC|=(1<<pinNumber);
            }
            else
            {
                //........ Error ........
            }
            break;
        case PORT_D:
            if(value==LOW)
            {
                PORTD&=~(1<<pinNumber);
            }
            else if(value==HIGH)
            {
                PORTD|=(1<<pinNumber);
            }
            else
            {
                //........ Error ........
            }
            break;
		default:
		{
			// ...... Error ......
		}
		
    }
}
void DIO_toggle(uint8_t pinNumber,uint8_t portNumber)
{
		/* skeleton:
			this function toggle the value on the (GPIO "DIO") 
			Check the port  
			this function takes port Number and Pin Number
	   */
    switch (portNumber)
    {
        case PORT_A:
            PORTA^=(1<<pinNumber);
            break;

        case PORT_B:
                PORTB^=(1<<pinNumber);
            break;

        case PORT_C:
                PORTC^=(1<<pinNumber);
            break;


        case PORT_D:

                PORTD^=(1<<pinNumber);
            break;
		default:
		{
			
		 // ...... Error ......
		}
    }
}
void DIO_read(uint8_t pinNumber,uint8_t portNumber,uint8_t* value)
{
		/* skeleton:
			read value on the (GPIO "DIO") pins
			Check the port and then pin value and put it in a variable
			this function takes port Number and Pin Number and pointer which we put the vale on it
	*/
    switch (portNumber)
    {
        case PORT_A:
            *value=(PINA&(1<<pinNumber))>>pinNumber;//00100010 & 00000010 =00000010>>00000001
            break;
        case PORT_B:
            *value=(PINB&(1<<pinNumber))>>pinNumber;
            break;
        case PORT_C:
            *value=(PINC&(1<<pinNumber))>>pinNumber;
            break;
        case PORT_D:
            *value=(PIND&(1<<pinNumber))>>pinNumber;
            break;
		default:
		{
			// ...... Error ......
		}
		
    }
}

void DIO_Reset(void)
{
		/* skeleton:
			This function Reset all ports
			It Takes Nothing and return Nothing
	    */
	PORTA=0X00;
	PORTB=0X00;
	PORTC=0X00;
	PORTD=0X00;
}