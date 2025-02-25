#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * reset_to_98 - sets variable n to 98
 * @*n: size of square
 * Return: void
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');

}
