#include "main.h"
/**
 * set_bit - gives a bit to 1 at a given index
 * @n: decimal number
 * @index: index position to change, starting from 0
 * Return: 1 on success -1 on succes
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int g;

	if (index > 64)
		return (-1);

	for (g = 1; index > 0; index--, g *= 2)
		;
	*n += g;

	return (1);
}
