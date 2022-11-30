#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Head of list
 *
 * Return: Head node's data
 */

int pop_listint(listint_t **head)
{
	if ((*head) == NULL)
		return (0);

	int n;
	listint_t *temp;

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
