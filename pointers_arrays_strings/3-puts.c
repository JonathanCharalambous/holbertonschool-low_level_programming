#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _puts - prints a string str
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
