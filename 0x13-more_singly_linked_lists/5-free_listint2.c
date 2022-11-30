#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp2;

	while ((temp2 = *head) != NULL)
	{
		*head = (*head)->next;
		free(temp2);
	}
}

