#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string str reversed
 * @s: string to print reversed
 * Return: void
 */
void print_rev(char *s)
{

	int len = 0;
	int i = 0;

	while (s[len] != '\0')
		len++;


	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');

}
