#include "main.h"
#include <ctype.h>

/**
	* print_sign - determines is a variable n is positive, negative
	* or zero
	* @n: The character that will be checked
	* Return: 1 if positive, 0 if zero, and -1 if negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
