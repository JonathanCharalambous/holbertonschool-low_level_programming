#include <stdio.h>
#include "main.h"


/**
 * binary_to_uint- converts a binary character into an int
 * @b: the character we want to convert
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		n <<= 1;

		if (*b == '1')
			n += 1;
		b++;
	}

	return (n);
}
