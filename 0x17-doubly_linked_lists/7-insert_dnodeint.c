#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a node at a particular part
 *@idx: index
 *@h: pointer of the head
 *@ninteger
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	current_node = *h;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (i != idx - 1 || current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current_node;
	new_node->next = current_node->next;
	if (current_node->next != NULL)
	{
		current_node->next->prev = new_node;
	}
		return (new_node);
}
