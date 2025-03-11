#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _calloc- assigns memory for a buffer using calloc
 * @nmemb: number of items in the buffer
 * @size: size needed for each item
 * Return: the assigned memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);


	return (arr);
}
