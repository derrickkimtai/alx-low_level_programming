#include "main.h"
/**
 *_strlen - calculates the length of string
 *@s: pointer to character
 *Return: length of thr string
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
