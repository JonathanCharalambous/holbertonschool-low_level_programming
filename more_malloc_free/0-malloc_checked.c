#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * malloc_checked- allocates memory 
 * @b: the amount of memory we want to allocate
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	char *arr = malloc(b * sizeof(*arr));

	if (arr == NULL)
		exit (98);
	
	return (arr);
}
