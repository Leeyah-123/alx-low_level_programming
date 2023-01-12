#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Double linked list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;

	if (h == NULL)
		return (n);

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
