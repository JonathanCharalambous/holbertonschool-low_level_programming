#include <stdio.h>
#include "main.h"

/**
 * print_binary- prints the binary of a given number
 * @n: the number to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
