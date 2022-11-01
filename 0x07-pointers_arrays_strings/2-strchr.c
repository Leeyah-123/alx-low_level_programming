#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: Pointer to string
 * @c: Character to be found
 *
 * Return: Pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	if (*(s + i) == c)
		return ('\0');
	return (s + i);
}
