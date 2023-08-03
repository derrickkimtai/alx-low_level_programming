#include "main.h"
/**
 *flip_bits - numbers of the bits you will need to flip
 *@n: number
 *@m:number
 *Return: count finnal flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int a, b, i = 0;

	for (i = 0; i < 32; i++)
	{
		a = (n & (1 << i)) > 0;
		b = (m & (1 << i)) > 0;
		if (a != b)
		{
			count++;
		}
	}
	return (count);
}
