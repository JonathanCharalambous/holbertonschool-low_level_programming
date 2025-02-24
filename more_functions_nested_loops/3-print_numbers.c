#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * Return: void
 */
void print_numbers(void)
{

	for (int i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
