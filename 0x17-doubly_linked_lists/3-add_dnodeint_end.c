#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Head of the list
 * @n: Value to be added to node
 *
 * Return: Address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	h = *head;

	while (h != NULL && h->next != NULL)
	{
		h = h->next;
	}

	new_node->prev = h;
	h->next = new_node;

	return (new_node);
}
