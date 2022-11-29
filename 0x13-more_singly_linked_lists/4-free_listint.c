#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	size_t i;

	for (i = 0; head != NULL; i++)
	{
		free(head->n);
		head = head->next;
	}
}
