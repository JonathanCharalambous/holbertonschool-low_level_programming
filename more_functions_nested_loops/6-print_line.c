#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_line - prints _ n number of times
 * @n: number of lines to be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
