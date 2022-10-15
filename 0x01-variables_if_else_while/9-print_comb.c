#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		putchar(',');
		for (b = 0; b < 10; b++)
			putchar('0' + b);
	}
	putchar('\n');
	return (0);
}
