#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog- intializes a dog struct using the given paramters
 * @d: the dog struct we want to give values to
 * @name: name we want to pass
 * @age: age we want to pass
 * @owner: owner we want to pass
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
