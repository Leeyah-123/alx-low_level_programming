#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}