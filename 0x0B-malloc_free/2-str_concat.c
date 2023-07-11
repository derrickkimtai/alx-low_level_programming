#include "main.h"
/**
 *str_concat - concatinate two string
 *@s1:string one
 *@s2: string two
 *Return: pointer of the concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1, len2;

	if (s1 == NULL  || s2 == NULL)
	{
		return (NULL);
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = malloc((len1 + len2) + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}
