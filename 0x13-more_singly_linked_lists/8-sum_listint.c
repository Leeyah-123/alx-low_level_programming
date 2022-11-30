#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data(n) of a listint_t linked list
 * @head: Head of list
 *
 * Return: Integer
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (; head != NULL; sum++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
