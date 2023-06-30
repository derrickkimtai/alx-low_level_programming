#include "lists.h"
/**
 *print_list - print what is on the linked list
 *list_t: list nodes
 *@h : ponter
 *Return: number of the codes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
			printf("[0]  %s\n", h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
