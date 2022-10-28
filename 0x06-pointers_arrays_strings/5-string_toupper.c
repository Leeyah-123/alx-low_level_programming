#include "main.h"
/**
 * string_toupper - Changes all lowercase letters to uppercase
 * @src: A string pointer
 *
 * Return: void
 */

char *string_toupper(char *src)
{
	int length = 0, i;

	while (src[length])
		length++;

	for (i = 0; i <= length; i++)
	{
		if (src[length] && src[length] > 96 && src[length] < 123)
			src[length] = src[length] - 32;
	}
}
