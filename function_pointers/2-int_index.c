#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index-iterates through an array to try and find a match with cmp
 * @array: the array to iterate through
 * @size: size of the array
 * @cmp: function call to match an index with a desired value
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
