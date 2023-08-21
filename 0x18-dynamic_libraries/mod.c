#include <stdio.h>
/**
 *mod - modulus of the number
 *@a: number
 *@b: number
 *Return: 0
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error: Modulus by zero\n");
		return (0);
	}
}
