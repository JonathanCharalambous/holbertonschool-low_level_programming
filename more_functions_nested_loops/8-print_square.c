#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_square - prints a square to the variable size
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}


}
