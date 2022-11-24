#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a node to the end of a linked list
 * @head: Head of linked list
 * @str: String
 *
 * Return: Address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, temp;
	size_t i;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
