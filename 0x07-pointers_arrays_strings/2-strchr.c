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
	unsigned int i;
	int flag = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			flag = 1;
			return (s + i);
		}
	}

	if (flag == 0)
		return ('\0');
}
