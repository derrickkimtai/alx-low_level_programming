#include "main.h"
/**
 *_strlen_recursion - function to get length
 *@s: string parameter
 *Return: 0 succes
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
