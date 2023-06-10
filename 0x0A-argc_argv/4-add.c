#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *add_positive_numbers - adds two numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */
int add_positive_numbers(int argc, char *argv[])
{
	int i, result = 0;

	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		while (*num != '\0')
		{
			if (!isdigit(*num))
		{
				printf("Error\n");
				return (1);
			}
			num++;
		}
			result += atoi(argv[i]);
		}
		return (result);
}
/**
 *main - entry point
 *@argc: argument count
 *@argv:argument value
 *Return: o
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 1)
	{
		printf("0\n");
	}
	result = add_positive_numbers(argc, argv);
	if (result != 1)
	{
		printf("%d\n", result);
	}
	return (0);
}
