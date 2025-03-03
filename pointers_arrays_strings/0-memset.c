#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * _memset- concats two string together
 * @s: the initial buffer
 * @b: The char we want to add
 * @n: int to indicate the size of the buffer
 * Return: The buffer with the new chars added
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
