#include "main.h"
/**
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(min * max);
		if (array == NULL)
	{
		return (NULL);
	}
	return (array);
}
