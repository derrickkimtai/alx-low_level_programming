#include "main.h"
/**
<<<<<<< HEAD
 *swap_int - interchanges the value of the integers
 *@a: swaps and store addresess of b
 *@b: swaps and stores addreses of a
=======
 *swap_init - take two integers and interchange
 *@a: swaps and store address a
 *b: swaps and stores address of b
>>>>>>> 8b52395598657d4a54c7f70e838965a918c17fce
 *Return: 0
 */
void swap_int(int *a, int *b)
{
<<<<<<< HEAD
int change;
change = *b;
*b = *a;
*a = change;
=======
int c = *a;

	*a = *b;
	*b = c;
>>>>>>> 8b52395598657d4a54c7f70e838965a918c17fce
}
