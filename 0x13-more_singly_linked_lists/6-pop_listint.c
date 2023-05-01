#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Delete the head node of listint_t
 * @head: Pointer to a list.
 * Return: Integer whenerver there is an integer such as 0 success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int my_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	return (my_data);
}
