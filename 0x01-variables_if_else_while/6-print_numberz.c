#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers of base 10
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	putchar('\n');
	return (0);
}

