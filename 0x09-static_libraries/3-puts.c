#include "main.h"
#include <stdio.h>
/**
 *_puts - writes a single output character
 *@s: single character pointer
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
