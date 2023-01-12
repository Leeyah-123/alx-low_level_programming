#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Head of doubly linked list
 * @n: Value to be added to node
 *
 * Return: Address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = *head;
	new_node->next = (*head)->next;
	*(head)->next = new_node;

	return (new_node);
}
