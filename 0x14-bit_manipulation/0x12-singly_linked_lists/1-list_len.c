#include "lists.h"
/**
 *list_len - list of the element
 *@h: nodes on the structure
 *Return: number of the element
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
			h = h->next;
	}
	return (count);
}
