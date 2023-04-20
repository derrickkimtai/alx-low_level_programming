#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all- sum the aruguments
 *@n: number of the arguments or numbers
 *Return: 0 succces
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list pargs;

	va_start(pargs, n);

	for (i = 0; i < n; i++)
		sum += va_arg(pargs, int);

	va_end(pargs);

	return (sum);
}
