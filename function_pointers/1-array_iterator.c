#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iteratir-iterates through an array and prints the int at the index
 * @array: the array to iterate through
 * @size: size of the array
 * @action: function call for what to do with the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
