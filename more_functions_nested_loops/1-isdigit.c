#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - determines wether a variable c is digit or not
 * @c: The variable that will be checked
 * Return: 1 if true 0 if false
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);

	return (0);
}
