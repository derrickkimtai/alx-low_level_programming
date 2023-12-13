#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
	return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
	{
		printf("%d", array[i]);
		if (i != right)
		printf(", ");
	}
	printf("\n");

	mid = left + (right - left) / 2;

	if (array[mid] == value)
	return (mid);

	if (array[mid] < value)
	left = mid + 1;
	else
	right = mid - 1;
	}

	return (-1);
}
