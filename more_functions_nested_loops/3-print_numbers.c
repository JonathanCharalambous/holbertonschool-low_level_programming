#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
