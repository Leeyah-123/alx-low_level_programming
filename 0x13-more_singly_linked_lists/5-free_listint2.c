#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Head of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head != NULL)
	{
		temp1 = *head;
		while ((temp2 = temp1) != NULL)
		{
			temp1 = temp1->next;
			free(temp2);
		}
		*head = NULL;
	}
}

