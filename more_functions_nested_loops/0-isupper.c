#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - determines wether a variable c is uppercase or not
 * @c: The variable that will be checked
 * Return: 1 if true 0 if false
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);

	return (0);
}
