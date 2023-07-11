#include "lists.h"
/**
 *reverse_listint - reverse the linked list
 *@head: starting point of the node
 *Return: head
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node;
	listint_t *previous = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next_node;
	}
	*head = previous;
	return (*head);
}
