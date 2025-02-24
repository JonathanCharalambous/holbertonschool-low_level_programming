#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_diagonal - prints _ n number of times
 * @n: number of lines to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{	for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
