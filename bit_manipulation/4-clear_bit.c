#include "main.h"

/**
 * set_bit- setting a bit to 0 at the index
 * @n: the pointer to our number
 * @index: the index we want to convert
 * Return: 1 if successfull -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}

	return (-1);
}
