#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: to separator strings
 *@n: input
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;

	va_list(pargs);

	va_start(pargs, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(pargs, char *);
				if (ptr == NULL)
			{
				printf("nil");
			}
			else
		{
			printf("%s", ptr);
		}

				if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
			}
			va_end(pargs);
			printf("\n");
}
