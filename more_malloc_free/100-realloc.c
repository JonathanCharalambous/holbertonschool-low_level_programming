#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * _realloc- realloctes a memory
 * @ptr: pointer to the new memory
 * @old_size: The old size allocated to the memory
 * @new_size: the new size we want to allocate
 * Return: the new block memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	void *new_ptr = NULL;
	unsigned int size = 0;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		size = (old_size < new_size) ? old_size : new_size;

		for (i = 0; i < size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];

		free(ptr);
	}

	return (new_ptr);


}
