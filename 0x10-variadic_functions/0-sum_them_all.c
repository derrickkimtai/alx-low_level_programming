#include "variadic_functions.h"
/**
 *sum_them_all - sum of integers
 *@n: input integer
 *Return: sum of the numbers
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list pargs;

	va_start(pargs, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pargs, int);
	}
	va_end(pargs);
	return (sum);
}
