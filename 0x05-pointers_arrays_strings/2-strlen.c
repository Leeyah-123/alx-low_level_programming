#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: A valid character pointer
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i, length;

	for (i = 0; str[i] != '\0'; ++i)
	{
		length++;
	}

	return (length);
}
