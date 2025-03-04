#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * _strlen_recursion- prints the length of a string using recursion
 * @s: string to count
 * Return: length on string
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{

		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
