#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0
 *@n: number
 *@index: index of the number
 *Return: 1 in sucess
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
