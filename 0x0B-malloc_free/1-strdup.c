#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: String
 *
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;

	p = (char *) malloc(sizeof(char) * i);

	if (p == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(p + i) = *(str + i);
	}

	return (p);
}
