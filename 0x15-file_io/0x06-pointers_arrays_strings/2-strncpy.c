#include "main.h"
/**
 *_strncpy - copies two string
 *@dest: destination
 *@src: source
 *@n: number of entered values
 *Return: dest succes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for  (i = 0; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
