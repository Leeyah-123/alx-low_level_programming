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
	listint_t *temp;

	if (head != NULL && index != 0)
	{
		temp = *head;
		for (n = 0; (temp != NULL && n < index + 1); n++)
			temp = temp->next;

		if (temp == NULL)
			return (-1);

		temp->next = *head->next;
		free(head);
	}

	if (index == 0 && *head != NULL)
	{
		*head = *head->next;
		free(temp);
		return (1);
	}

	return (-1);
}
