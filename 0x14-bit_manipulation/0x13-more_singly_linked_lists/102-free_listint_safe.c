#include "lists.h"
/**
 *free_listint_safe - frees a linked list
 * @h: starting point a node
 *Return: count
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next_node;

	while (current != NULL)
	{
		count++;
		next_node = current->next;
		free(current);
		current = next_node;

		if (next_node >= current)
		{
			*h = NULL;
			exit(98);
		}
	}
	*h = NULL;
	return (count);
}
