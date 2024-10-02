/*
 * Test01.c
 *
 * Created: 10/2/2024 12:40:42 PM
 * Author : dbeog
 */

// OM OMG NEW Jeans
// LED Port : PG4
#include <avr/io.h> // AVR ?? ??

// ???? ???? ???

int main(void)
{
	DDRG |= 0x10; // xxx1 0000: 1 = ?? 0 = ??
    while (1) 
    {
		PORTG |= 0x01;
    }
}

