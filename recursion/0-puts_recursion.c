#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * _puts_recursion: prints a string using recursion
 * @char: string to print
 * Return: void
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
