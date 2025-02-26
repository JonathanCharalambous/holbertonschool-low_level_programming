#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: string to print
 * Return: void
 */
void puts2(char *str)
{

	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;


	for (i = 0; i < len; i += 2)
		_putchar(str[i]);


	_putchar('\n');
}
