#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * _pow_recursion- finds x to the power of y
 * @x: base number
 * @y: exponent
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{


	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}

	return (x);
}
