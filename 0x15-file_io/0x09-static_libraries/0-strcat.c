#include "main.h"
/**
 *_strcat - concacinate two strings
 *@dest: destination
 *@src: source
 *Return: destination
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
	{
		p++;
	}
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
