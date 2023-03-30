#include "main.h"
/**
 *reverse_array - reverses the value of the array
 *@a: values of array and number
 *@n: possible numbers of arrays
 *Return: 0 succes
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n / 2 ; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
