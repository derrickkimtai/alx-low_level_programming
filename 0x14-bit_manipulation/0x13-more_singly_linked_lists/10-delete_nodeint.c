#include "lists.h"
/**
 *delete_nodeint_at_index - delete the node at aspecific index
 *@head: starting point
 *@index: address of the node
 *Return: 1 on success and -1 on failure
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i;

	if (index == 0 && current != NULL)
	{
		*head = current->next;
			free(current);
		return (1);
	}
	for (i = 0; i < index  && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);
	return (1);
}
