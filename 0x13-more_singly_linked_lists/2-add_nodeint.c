#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Head of the list
 * @n: Number to be added to node
 *
 * Return: The address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *(h)->next;

	*head = new_node;

	return (*head);
}
