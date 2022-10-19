# include "main.h"

/**
 * print_to_98 - Prints natural numbers
 * @n: An integer
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
