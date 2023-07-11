#include "lists.h"
/**
 *print_listint - print what is on the node
 *listint_t : list nodes
 *@h: pointer
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
	h = h->next;
	count++;
	}
	return (count);
}
