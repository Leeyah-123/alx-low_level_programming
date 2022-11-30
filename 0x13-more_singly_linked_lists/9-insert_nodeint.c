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
	listint_t *new_node, *temp;
	unsigned int i;

	temp = *head;

	if (idx != 0)
	{
		for (i = 0; (temp != NULL && i < idx - 1); i++)
			temp = temp->next;
	}

	if (temp == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
