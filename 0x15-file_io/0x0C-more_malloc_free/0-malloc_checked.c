#include "main.h"
/**
 *malloc_checked - allocates memmory
 *@b: input
 *Return: pointer
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
