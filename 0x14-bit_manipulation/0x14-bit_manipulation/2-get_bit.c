#include "main.h"
/**
 *get_bit - value of a bit
 *@index: ndex of a given binary
 *@n: the numbers
 *Return: -1
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
