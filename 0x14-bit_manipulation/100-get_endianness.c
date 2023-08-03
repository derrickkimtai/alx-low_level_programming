#include "main.h"
/**
 *get_endianness - checks the endianess
 *Return: 1
 *
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	return ((*ptr == 1) ? 1 : 0);
}
