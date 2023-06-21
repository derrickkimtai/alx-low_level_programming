#include "function_pointers.h"
/**
 *int_index - used to index values
 *@array: array of numbers
 *@size: size of the numbers
 *@cmp: compare numbers
 *Return: -1 if no match
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
