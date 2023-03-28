#include "main.h"
/**
 *swap_int - interchanges the value of the integers
 *@a: swaps and store addresess of b
 *@b: swaps and stores addreses of a
 *Return: 0
 */
void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
