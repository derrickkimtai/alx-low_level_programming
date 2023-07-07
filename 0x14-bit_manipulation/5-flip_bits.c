#include "main.h"
/**
 *flip_bits - flips to get one number
 *@n: binaryone
 *@m: binary two
 *Return: unsigned int count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int i = n ^ m;

	while (i != 0)
	{
		count += i & 1;
		i >>= 1;
	}
	return (count);
}
