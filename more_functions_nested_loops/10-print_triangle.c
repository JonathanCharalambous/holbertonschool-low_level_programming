#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_triangle - prints a square to the variable size
 * @size: size of square
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
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
