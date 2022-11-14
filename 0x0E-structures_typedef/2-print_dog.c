#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == '\0')
		printf("(nil)\n");
	else
		printf("%s\n", d->name);
	printf("Age: ");
	if (d->age == NULL)
		printf("(nil)\n");
	else
		printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner == '\0')
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
