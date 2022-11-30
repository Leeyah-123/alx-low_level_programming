#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 * @head: Head of linked list
 * @index: Position of node
 *
 * Return: Node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; (head != NULL && n < index); n++)
		head -> head->next;

	return (head);
}
