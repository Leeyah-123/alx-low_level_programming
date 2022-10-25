#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character
 * @str: A string
 *
 * Return: void
 */

void puts2(char *str)
{
	int count = 0, i;

	while (str[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		if (i % 2 != 0)
			continue;
		putchar(str[i]);
	}
	putchar('\n');
}
