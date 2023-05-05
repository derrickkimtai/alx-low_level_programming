#include "main.h"
#include <stdio.h>
/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first digit
 * @m: second number to convert
 * Return: number of bits which was  needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference;
	int counting;

	difference = n ^ m;
	counting = 0;

	while (difference)
	{
		counting++;
		difference &= (difference - 1);
	}

	return (counting);
}
