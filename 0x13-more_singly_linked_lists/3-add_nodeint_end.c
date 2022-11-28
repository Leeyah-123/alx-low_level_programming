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

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = NULL;
	for (i = 0; *head != NULL; i++)
	{
		if (*(head)->next == NULL)
		{
			*(head)->next = new_node;
			*head = new_node;
		}
		*(head) = *(head)->next;
	}

	return (*head);
}
