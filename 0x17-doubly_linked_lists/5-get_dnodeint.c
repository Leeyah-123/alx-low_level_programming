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
	unsigned int i;

	if (head == NULL)
		return (NULL);

	h = head;
	while (h->prev != NULL)
		h = h->prev;

	i = 0;
	while (h != NULL)
	{
		if (i == index)
			break;
		h = h->next;
		i++;
	}

	return (h);
}
