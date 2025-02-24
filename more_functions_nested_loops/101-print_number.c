#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_number - prints a number n
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{

	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
