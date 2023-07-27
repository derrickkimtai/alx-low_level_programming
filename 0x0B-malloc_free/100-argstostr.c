#include "main.h"
/**
 *argstostr - concatinates array of string
 *@ac: arguments count
 *@av: argument vector
 *Return: string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	str = (char *) malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[len++] = av[i][j];
		}
		str[len++] = '\n';
	}
	str[len] = '\0';
	return (str);
}
