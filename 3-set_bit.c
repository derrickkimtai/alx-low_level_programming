#include "main.h"
/**
 *set_bit - set value of abit
 *@n: pointer integer
 *@index:set_bit
 *Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
