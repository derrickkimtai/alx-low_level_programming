#include "lists.h"
/**
 *get_nodeint_at_index - finds the index of a node
 *@head: starting point of the linked list
 *@index: index of the node
 *Return: nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (node == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		node = node->next;
		i++;
	}
	return (node);
}
