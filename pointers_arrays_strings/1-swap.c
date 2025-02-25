#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * swap_int - swaps the values of both parameters
 * @a: int to swap
 * @b: int to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{

	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;

}
