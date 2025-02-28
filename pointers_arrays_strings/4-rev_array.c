#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * reverse_array- reverses an array
 * @a: array to reverse
 * @n: the number of the array
 * Return: the intial string with the src added
 */

void reverse_array(int *a, int n)
{
	int *arr = malloc(n * sizeof(int));
	int i = 0;


	for (i = 0; i < n; i++)
	{
		arr[i] = a[n - 1 -  i];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}

}
