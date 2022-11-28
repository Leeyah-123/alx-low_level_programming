#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Head of the list
 * @n: Number to be added to node
 *
 * Return: Address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	size_t i;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		for (i = 0; (*head)->next != NULL; i++)
			*head = (*head)->next;

		(*head)->next = new_node;
		*head = new_node;
	}

	return (*head);
}
