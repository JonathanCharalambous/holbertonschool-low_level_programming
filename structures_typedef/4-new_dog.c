#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog- intializes a dog_t struct using the given paramters
 * @name: name we want to pass
 * @age: age we want to pass
 * @owner: owner we want to pass
 * Return: Our new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *cute_dog;

	cute_dog = malloc(sizeof(dog_t));
	if (cute_dog == NULL)
		return (NULL);

	cute_dog->name = name;
	cute_dog->age = age;
	cute_dog->owner = owner;

	return (cute_dog);
}
