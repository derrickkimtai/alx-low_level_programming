#include "lists.h"
/**
 *pop_listint - deletes the head node
 *@head: starting point of the node
 *Return: the original data and 0 if null
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	current = *head;
	*head = (*head)->next;
	i = current->n;
	free(current);
	return (i);
}
