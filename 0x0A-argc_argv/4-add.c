#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Prints the name of a programme followed by a new line
 * @argc: Number of arguments passed to program
 * @argv: Arguments passed
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}

