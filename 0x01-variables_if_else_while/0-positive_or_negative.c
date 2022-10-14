#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Returns: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
<<<<<<< HEAD
	n = rand() - RAND_MAX / 2;
=======
	n = rand() - RANDMAX / 2;
>>>>>>> 1203fbc0a41751a90fc41106f61efc7a942b598b
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
