#include "main.h"
#include <string.h>
/**
 *_strspn - compares
 *@s:character pointer
 *@accept: to confirms
 *Return: to return the pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s && strchr(accept, *s))
	{
		count++;
		s++;
	}
	return count;
}
