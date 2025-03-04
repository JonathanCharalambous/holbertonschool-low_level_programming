#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * factorial- finds the factorial of the given n
 * @n: the number we will find the factorial of
 * Return: the factorial of n
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);

	if (n > 1)
	{
		return (n * (factorial(n - 1)));
	}

	return (n);
}
