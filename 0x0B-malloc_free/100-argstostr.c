#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates arguments
 * @ac: Number of arguments
 * @av: Array of strings
 *
 * Return: Pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	p = (char *) malloc((sizeof(char) + 1) * ac);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(p + i + j) = av[i][j];
			if (av[i][j + 1] == '\0')
				*(p + i + j + 1) = '\n';
		}
	}

	return (p);
}
