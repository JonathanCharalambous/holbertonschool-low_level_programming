#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - counts the size of a string s
 * @s: string to check
 * Return: length on variable s
 */
int _strlen(char *s)
{

	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);

}


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
	int name_len = _strlen(name);
	int owner_len = _strlen(owner);
	int i = 0;

	cute_dog = malloc(sizeof(dog_t));
	if (cute_dog == NULL)
	{	
		free(cute_dog);
		return (NULL);
	}

	cute_dog->name = malloc(name_len + 1);

	if (cute_dog->name == NULL)
	{
		free(cute_dog->name);
		free(cute_dog);
	}

	cute_dog->owner = malloc(owner_len + 1);

	if (cute_dog->owner == NULL)
        {
                free(cute_dog->owner);
                free(cute_dog);
        }

	for (i = 0; i <= name_len; i++)
		cute_dog->name[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		cute_dog->owner[i] = owner[i];
	
	

	cute_dog->age = age;

	return (cute_dog);
}
