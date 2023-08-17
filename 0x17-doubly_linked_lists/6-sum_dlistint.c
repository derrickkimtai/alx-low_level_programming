#include "lists.h"
/**
 *sum_dlistint - sum of the nodes in the list
 *@head: pointer to the head
 *Return: 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current_node;

	current_node = head;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
