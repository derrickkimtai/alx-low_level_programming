#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 *_sqrt_recursion - natural square root
 *@n: input
 *Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
			return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - square of a number
 * @n: number
 * @i: miver
 * Return: -1
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
