#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a node at a given position
 *@head: pointer to the strating point
 *@idx: index
 *@n:integer value
 *Return: pointer address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i;
	listint_t *node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && node != NULL; i++)
	{
		node = node->next;
	}
	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = node->next;
	node->next = new_node;
	return (new_node);
}
