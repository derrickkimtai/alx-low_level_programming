#include "main.h"
/**
 *_strdup - duplicates a string
 *@str: string input to be duplicated
 *Return: pointer duplicate
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = malloc(strlen(str) + 1);
		if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
