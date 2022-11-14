#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs
 * @d: Dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	int i;

	for (i = 0; d->name[i] != '\0'; i++)
		free(d->name[i]);
	free(d->age);
	for (i = 0; d->owner[i] != '\0'; i++)
		free(d->owner[i]);
	free(d);
}
