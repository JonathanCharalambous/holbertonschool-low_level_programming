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

	int num = n;
	int len = 0;

	while (num != 0)
	{
		num = num / 10;
		len++;
	}

	if (n == 0)
		_putchar(n + '0');

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (len == 2)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}

	if (len == 3)
	{
		_putchar((n / 100) + '0');
		_putchar(((n % 10) / 10) + '0');
		_putchar((n %  10) + '0');
	}
	if (len == 4)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n % 10) / 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n %  10) + '0');
	}
}
