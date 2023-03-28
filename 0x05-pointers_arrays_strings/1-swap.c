#include "main.h"
/**
 *swap_init - take two integers and interchange
 *@a: swaps and store address a
 *b: swaps and stores address of b
 *Return: 0
 */
void swap_int(int *a, int *b)
{
int c = *a;

	*a = *b;
	*b = c;
}
