#include "lists.h"
/**
 *free_listint - frees the memory allocated
 *@head : the starting point
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
