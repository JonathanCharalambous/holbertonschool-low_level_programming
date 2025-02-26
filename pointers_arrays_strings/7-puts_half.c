#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * puts_half - prints the latter half of a string
 * @str: string to print
 * Return: void
 */
void puts_half(char *str)
{

	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;


	for (i = len / 2; i < len; i++)
		_putchar(str[i]);


	_putchar('\n');
}
