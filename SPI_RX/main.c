/*
 * DIO_PROJECT_TESTED.c
 *
 * Created: 12/17/2019 4:33:13 AM
 * Author : ahmed
 */ 


#include "DIO.h"
#include "SPI_Pb.h"
#include "DIO.h"



int main(void)
{
	uint8_t OPA =0;

	DIO_Init_Port(PORT_B,OUTPUTS);	/* Set Out Port for 7 segment */
	DIO_Init_Pin(D2,OUT);			/* Set Out for 7 Segment pin enable */
	DIO_Init_Pin(D3,OUT);			/* Set Out for 7 Segment pin enable */
	DIO_Write_Pin(D2,HIGH);			/* For 7 Segment Enable */
	DIO_Write_Pin(D3,HIGH);			/* For 7 Segment Enable */
	SPI_Init(&SPI_RX);

    while (1) 
    {
		SPI_Receive_Byte(&OPA);
		PORTB = OPA ;
    }
}



