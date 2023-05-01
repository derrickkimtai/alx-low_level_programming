#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data in the list
 * @head: starting point
 * Return: sum of all data
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
