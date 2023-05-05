#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the gert of a  the value of a bit at a given index
 * @n: number to
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int inside;

	if (index > 64)
		return (-1);

	inside = n >> index;

	return (inside & 1);
}
