#include "lists.h"
/**
 *sum_listint - sum of the linked list
 *@head: the starting the point of the linked list
 *Return: the sum
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
