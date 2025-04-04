#include "main.h"

/**
 * clear_bit- setting a bit to 0 at the index
 * @n: the pointer to our number
 * @index: the index we want to convert
 * Return: 1 if successfull -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
