#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Head of list
 * @idx: Index of new node
 * @n: Data to be inserted into new node
 *
 * Return: Address of new node(Success)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head == NULL)
		return (NULL);

	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return NULL;

	for (i = 0; (*head != NULL && i < idx - 1); i++)
	{
		*head = (*head)->next;
	}

	if (i == idx && *head != NULL)
	{
		temp = *head;

		temp->next = new_node;
		new_node->next = temp->next;
		new_node->n = n;
		return (new_node);
	}

	return (NULL);
}
