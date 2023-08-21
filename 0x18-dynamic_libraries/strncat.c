#include "main.h"
/**
 *_strncat - concatinate a portion of string
 *@dest: destination string
 *@src: source string
 *@n: btyes to concatinated
 *Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
