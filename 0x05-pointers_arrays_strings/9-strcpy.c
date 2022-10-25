#include "main.h"
#include <stdio.h>
/**
 * strcpy - copies a string into a buffer
 * @dest: destination
 * @src: source
 *
 * Return: The pointer to dest;
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
