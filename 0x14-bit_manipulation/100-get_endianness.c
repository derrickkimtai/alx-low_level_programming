#include "main.h"

/**
 * get_endianness - inspects endianness
 * Return: 0  big endian, when  1  little endian
 */
int get_endianness(void)
{
	int digit;

	digit = 1;
	if (*(char *)&digit == 1)
		return (1);
	else
		return (0);
}
