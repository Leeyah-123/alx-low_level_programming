#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Variable of type struct dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
