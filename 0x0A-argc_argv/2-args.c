#include <stdio.h>
/**
 * main - Prints the name of a programme followed by a new line
 * @argc: Number of arguments passed to program
 * @argv: Arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	printf("\n");
	return (0);
}

