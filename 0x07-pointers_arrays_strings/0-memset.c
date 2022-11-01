#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Memory address
 * @b: Memory address
 * @n: An integer
 *
 * Return: A character pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
