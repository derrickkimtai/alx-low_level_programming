#include "main.h"
/**
 *clear_bit - sets the value
 *@n: number
 *@index: index
 *Return: 1 success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
