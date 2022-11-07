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
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	p = (char *) malloc((sizeof(char) * len) + ac + 1);

	if (p == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[len] = av[i][j];
			if (av[i][j + 1] == '\0')
				p[len + 1] = '\n';
			len++;
		}
	}

	return (p);
}
