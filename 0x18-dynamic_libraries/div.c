#include <stdio.h>
/**
 *div - division of a number
 *@a:number
 *@b:number
 *Return: division
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a/b);
	}
	else
	{
		printf("Error: Division by zero\n");
		return (0);
	}
}
