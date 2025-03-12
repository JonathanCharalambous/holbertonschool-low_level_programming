#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog- prints a dog struct using the given paramtess
 * @d: the dog struct we want to print the values if
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";



	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
