#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints half of a string
 * @str: A string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (str[count] != '\0')
		count++;

	if (count % 2 == 0)
	{
		i = (count - 1) / 2;
	}
	else
	{
		i = count / 2;
	}

	for (i++; i < count; i++)
		putchar(str[i]);
	putchar('\n');
}

