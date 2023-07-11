#include "main.h"
/**
 *_calloc - allocates memmory for an array
 *@nmemb: specifies the number memmory to allocate
 *@size:the size of bytes of each element
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
