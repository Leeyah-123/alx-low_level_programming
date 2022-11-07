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

	if (s1 != NULL)
	{
		while (*(s1 + s1_len) != '\0')
			s1_len++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + s2_len) != '\0')
			s2_len++;
	}

	p = (char *) malloc(1 + (sizeof(char) * s1_len) + (sizeof(char) * s2_len));

	if (p == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(p + i) = *(s1 + i);
	}

	for (i = 0; *(s2 + i) != '\0'; i++)
	{
		if (s2 == NULL)
			break;
		*(p + i + s1_len) = *(s2 + i);
	}
	*(p + s1_len + s2_len + 1) = '\0';

	return (p);
}
