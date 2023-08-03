#include "main.h"
/**
 *get_bit - return the value of a bit at s given index
 *@n: number
 *@index: index of the number
 *Return: value of the bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	return ((n & (1 << index)) > 0);
}
