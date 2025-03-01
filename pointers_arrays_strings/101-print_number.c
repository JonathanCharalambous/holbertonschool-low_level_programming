#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * print_number- concats two string together
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = 0;
	
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
