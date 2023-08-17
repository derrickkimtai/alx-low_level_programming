#include "lists.h"
/**
 *get_dnodeint_at_index - gets the index
 *@head: pointer to the head
 *@index: index of the pointer
 *Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i;

	current_node = head;
	for (i = 0; i < index && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (i == index && current_node != NULL)
	{
		return (current_node);
	}
	else
	{
		return (NULL);
	}
}
