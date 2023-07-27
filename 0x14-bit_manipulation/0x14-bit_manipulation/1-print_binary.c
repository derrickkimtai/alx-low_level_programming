#include "main.h"
/**
 *print_binary - print the binary digits
 *@n:number to inerted
 *
 *
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int bits = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 1;

	while (bits > 0)
	{
		if ((n & bits) != 0)
		{
			i = 0;
			_putchar('1');
		}
		else if (!i)
		{
			_putchar('0');
		}
		bits >>= 1;
	}
	if (i)
	{
		_putchar('0');
	}
}
