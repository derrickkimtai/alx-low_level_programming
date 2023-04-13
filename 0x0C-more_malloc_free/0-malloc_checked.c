#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - main entry
 *@b: integer
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

		ptr = malloc(b);

	if (ptr == NULL)
		exit (98);
	return (ptr);
}
