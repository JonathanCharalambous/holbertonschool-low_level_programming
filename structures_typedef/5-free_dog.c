#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog- frees the memory allocated for our dog
 * @d: the dog we want to free
 * Return: void
 */

void free_dog(struct dog *d)
{

	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
