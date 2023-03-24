#include "main.h"
/**
 *print_line - displays straight line
 *@n: to be cheked
 *Return: always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
