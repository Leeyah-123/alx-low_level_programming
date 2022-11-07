#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Character pointer
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, i;
	char *p;

	while (*(s1 + s1_len) != '\0')
		s1_len++;
	while (*(s2 + s2_len) != '\0')
		s2_len++;

	p = (char *) malloc((sizeof(char) * s1_len) + (sizeof(char) * s2_len));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		*(p + i) = *(s1 + i);
	}

	for (i = s1_len; i < (s1_len + s2_len); i++)
	{
		*(p + i) = *(s2 + i);
	}

	return (p);
}
