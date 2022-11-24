#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints out the elements in a linked list
 * @h: Pointer to first element in linked list
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
