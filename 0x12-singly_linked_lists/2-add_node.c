#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Adds a node at the top of a linked list
 * @head: Head of lined list
 * @str: String to be added
 *
 * Return: Address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = *head;

	for (i = 0; *(str + i) != '\0'; i++)
		;

	new_node->len = i;
	*head = new_node;

	return (*head);
}
