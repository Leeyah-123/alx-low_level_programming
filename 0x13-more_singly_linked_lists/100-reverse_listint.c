#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Head of linked list
 *
 * Return: First node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
