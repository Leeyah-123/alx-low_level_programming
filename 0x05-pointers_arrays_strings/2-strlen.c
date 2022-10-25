#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: A valid character pointer
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int index;

	index = 0;
	while(s[index] != '\0')
	{
		index++;
	}

	return (index);
}
