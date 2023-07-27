#include "main.h"
/**
 *_strchr - search a specified character
 *@s: pointer
 *@c: character to be checked
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return NULL;
}
