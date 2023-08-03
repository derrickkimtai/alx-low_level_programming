#include "main.h"
/**
 *set_bit - set the value of bit to 1
 *@n: number
 *@index: index of the number
 *Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
