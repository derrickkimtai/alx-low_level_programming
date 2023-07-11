#include "main.h"
/**
 *_strcpy - copy a portion of the string
 *@dest: destination
 *@src: source string
 *@n: number of characterf to be copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return dest;
}
