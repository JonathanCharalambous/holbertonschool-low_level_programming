#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_array - prints the array on ints
 * @n: size of array
 * @a: array of ints
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	
	}
	printf("\n");
}
