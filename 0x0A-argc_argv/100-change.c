#include <stdio.h>
#include <stdlib.h>

/**
 * calc_change - Calculate the minimum number of coins needed to make change
 * @cents: Amount of money
 * @change: Change
 *
 * Return: Number of change
 */

int calc_change(int cents, int change)
{
	int next, i;
	int coins[5] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (change == coins[i])
		{
			next = coins[i + 1];
			break;
		}
	}

	if (cents == change)
		return (1);
	if (cents < change)
	{
		return (calc_change(cents, next));
	}

	if ((cents - change) > 0)
		next = change;
	return (calc_change(cents - change, next) + 1);
}

/**
 * main - Prints the minimum number of coins to
 * make change for an amount of money
 * @argc: Number of arguments passed to program
 * @argv: Arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
		printf("0\n");
	else
	{
		printf("%d\n", calc_change(atoi(argv[1]), 25));
	}
	return (0);
}

