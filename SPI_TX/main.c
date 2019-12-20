/*
 * DIO_PROJECT_TESTED.c
 *
 * Created: 12/17/2019 4:33:13 AM
 * Author : Ahmed Alaa
 */ 


#include "DIO.h"
#include "SPI_Pb.h"
#define F_CPU 8000000UL
#include <util/delay.h>

extern uint8_t gu8_Data_SentFlag;    /* get the value of the ISR flag */
int main(void)
{

	uint8_t counter = 0;
	SPI_Init(&SPI_TX);          /* Init SPI */
	DIO_Init_Pin(C4,IN);		/* For Push Button Input */
	
    while (1) 
    {
		if(gu8_Data_SentFlag == 1)
		{
			SPI_Send_Byte(counter);   /*  send counter value */
			//counter++;
		}
		_delay_ms(300);
		if ( READ_BIT(PINC,4))		  /* Poll to get value from Push button */
		{
			counter++;
		}
		

    }
}



