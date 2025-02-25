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

	int len = strlen(s);
	int i = 0;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');

}
