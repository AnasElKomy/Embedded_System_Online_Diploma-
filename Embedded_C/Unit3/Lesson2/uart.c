#include "uart.h"
#define UART0DR  *((volatile unsigned int* const)(unsigned int*)(0x101f1000))  //UART0DR register 

void UART_SEND_STRING (unsigned char *P_Tx)
{
	while(*P_Tx != '\0')         											 //check the null end of the string
	{
		UART0DR = (unsigned int)(*P_Tx);							         //Transmit char
		P_Tx++;																 // point to next char
	}
}