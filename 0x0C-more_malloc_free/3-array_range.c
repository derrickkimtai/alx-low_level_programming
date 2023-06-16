#include "main.h"
/**
 *array_range - creates an araay if integers
 *@min : minimum integer
 *@max: maximum integer
 *Return: array pointer
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(((max - min) + 1) * sizeof(int));
		if (array == NULL)
	{
		return (NULL);
	}
		for (i = 0; i <= max - min; i++)
		{
			array[i] = min + 1;
		}
	return (array);
}
