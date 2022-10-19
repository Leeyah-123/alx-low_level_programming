#include "main.h"

/**
 * main - causes an infinite loop
 * @i: i is an integer
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	printf("Infinite loop incoming :(\n");

	i = 0;

	// while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
