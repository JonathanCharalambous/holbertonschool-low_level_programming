#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
	* print_last_digit - determines the last digit of a variable c
	* @c: The variable that will be checked
	* Return: returns the last digit of a variable c
*/

int print_last_digit(int c)
{
	_putchar(abs(c));
	return abs((c % 10));
}
