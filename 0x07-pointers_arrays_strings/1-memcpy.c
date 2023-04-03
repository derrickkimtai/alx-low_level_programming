#include "main.h"
/**
 *_memcpy - copies two variable
 *@dest: destination
 *@src: source
 *@n: value of byte
 *Return: dest succes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
