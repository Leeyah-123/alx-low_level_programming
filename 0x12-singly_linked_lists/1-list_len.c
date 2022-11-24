#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Head of linked list
 *
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
