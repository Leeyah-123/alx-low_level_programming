#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: String
 *
 * Return: Array of strings
 */

char **strtow(char *str)
{
	char **p;
	int n = 0, len = 0, i, j;

	if (str == NULL || ((*str == ' ') && (*(str + 1) == '\0')))
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == ' ')
		{
			n++;
		}
	}
	n += 1;
	p = (char **) malloc(sizeof(char *) * n);
	if (p == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; *(str + i + j) != '\0'; j++)
		{
			if (*(str + i + j) == ' ')
				break;
			len++;
		}
		*(p + i) = (char *) malloc((sizeof(char) * len) + 1);

		if (*(p + i) == NULL)
			return (NULL);
		for (j = 0; *(str + i + j) != '\0'; j++)
		{
			if (*(str + i + j) == ' ')
				break;
			p[i][j] = *(str + i + j);
		}
		len = 0;
	}

	return (p);
}
