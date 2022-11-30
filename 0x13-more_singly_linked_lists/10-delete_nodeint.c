#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index "index"
 * of a listint_t linked list
 * @head: Head of linked list
 * @index: Index of node
 *
 * Return: 1 (Success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *temp1, *temp2;

	temp1 = *head;
	if (index != 0)
	{
		for (n = 0; n < index - 1 && temp1 != NULL; n++)
			temp1 = temp1->next;
	}

	if (temp1 == NULL && (temp1->next == NULL && index != 0))
		return (-1);

	temp2 = temp1->next;

	if (index != 0)
	{
		temp1->next = temp2->next;
		free(temp2);
	}
	else
	{
		free(temp1);
		*head = temp2;
	}

	return (1);
}
