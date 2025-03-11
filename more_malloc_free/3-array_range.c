#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * array_range- produces a pointer to an array with a range of numbers
 * @min: the number to start from
 * @max: the number to end on
 * Return: array with all the number in range
 */

int *array_range(int min, int max)
{

	int *arr = NULL;
	int i = 0;
	int j = 0;

	if (min > max)
		return (NULL);


	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
