#include "variadic_functions.h"
/**
 *print_numbers - prints numbers
 *@separator: separetes numbers
 *@n: number of integers
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int numbers;
	unsigned int i;

	va_list(pargs);

	numbers = 0;
	va_start(pargs, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(pargs, int);
		printf("%d", numbers);
		if (i != n - 1 &&  separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(pargs);
	printf("\n");
}
