#include "main.h"
/**
 *_puts - fuction that prints a string
 *@str: - pionter to the string
 *Return: string and new line
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
