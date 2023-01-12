#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Head of linked list
 * @index: Index of node
 *
 * Return: Nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *h;

	if (head == NULL)
		return (NULL);

	while (h->prev != NULL)
		h = h->prev;

	index++;
	while (index != 0 && h != NULL)
	{
		h = h->next;
		index-=1;
	}

	return (h);
}
