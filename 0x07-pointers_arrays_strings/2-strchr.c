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
	unsigned int i, s_len = 0, flag = 0;

	while ((*(s + s_len)) != '\0')
		s_len++;

	for (i = 0; i < s_len; i++)
	{
		if ((*(s + i)) == c)
		{
			return (s + i);
			flag = 1;
		}
	}

	if (flag == 0)
		return ('\0');
}
