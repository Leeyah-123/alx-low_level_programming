#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: A string pointer
 * @src: A string pointer
 * @n: An integer
 *
 * Return: A string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (dest[index] == '\0')
			break;
		dest[index] = src[index];
	}
}
