#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the name of a programme followed by a new line
 * @argc: Number of arguments passed to program
 * @argv: Arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(agrv[1]) * atoi(argv[2])));
	return (0);
}

