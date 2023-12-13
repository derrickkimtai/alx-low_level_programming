#include "search_algos.h"
/**
 *linear_search - searches for a value in an array
 *@array: pointerto the first element of the array to serch in
 *@size: the number of elemnts in the array
 *@value:the value to search for
 *Return: first index where where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
