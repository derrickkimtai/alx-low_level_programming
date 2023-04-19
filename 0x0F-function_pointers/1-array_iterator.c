#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - itrates over the array
 *@array: array
 *@size: size of the array
 *@action: part of the action
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
