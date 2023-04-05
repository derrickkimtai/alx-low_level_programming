#include "main.h"
/**
 *factorial - finds the factorial of a number
 *@n: intager of number
 *Return: 0 succes
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
