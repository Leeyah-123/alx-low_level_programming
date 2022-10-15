#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
