#include "main.h"
/**
 *_memcpy - copy a srting
 *@dest: destination of string
 *@src: source of the string
 *@n: number of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return dest;
}
