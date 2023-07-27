#include "main.h"
/**
 *_memset - initialize a block of memmory to a specific value
 *@s: pointer to an array
 *@b: to be changed to
 *@n:  number of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
