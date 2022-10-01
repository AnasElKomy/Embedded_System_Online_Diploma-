#include "uart.h"
unsigned char Transmit_buffer[100] = "Learn in depth:<Anas>";
void main ()
{
	UART_SEND_STRING(Transmit_buffer);
}