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
	int i;

	for (i = 0; i < n - 1; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
