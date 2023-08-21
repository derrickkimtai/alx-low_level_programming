#include "main.h"
/**
 *_strpbrk - checks the occurence of a character
 *@s: used to to checked
 *@accept: to be confirmed
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return s;
			}
			a++;
		}
		s++;
	}
	return NULL;
}
