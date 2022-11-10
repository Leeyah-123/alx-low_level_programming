#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string input
 * @s2: Second string input
 * @n: Number of bytes to be concatenated
 *
 * Return: Pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1_len, s2_len, p_len, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	if (n > s2_len)
		n = s2_len;

	p_len = s1_len + n;
	p = malloc(p_len + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < p_len; i++)
	{
		if (i < s1_len)
			p[i] = s1[i];
		else
			p[i] = s2[i - s1_len];
	}

	p[i] = '\0';
	return (p);
}
