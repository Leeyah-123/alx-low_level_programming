#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list
 * @head: Head of the list
 *
 * Return: Integer
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head->prev != NULL)
		head = head->prev;

	sum = 0;
	while (head != NULL)
	{
		head = head->next;
		sum += head->n;
	}

	return (sum);
}
