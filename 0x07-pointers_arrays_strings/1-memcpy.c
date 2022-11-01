#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: Destination
 * @src: Source
 * @n: Amount of bytes to be copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, src_len = 0;

	while ((*(src + src_len)) != '\0')
		src_len++;

	for (i = 0; i < src_len; i++)
	{
		if (i > n)
			break;
		*(dest + i) = *(src + i);
	}

	return (dest);
}
