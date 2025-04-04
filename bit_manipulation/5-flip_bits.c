#include "main.h"

/**
 * flip_bits- find the bits needed to get from n to m
 * @n: starting point
 * @m: ending point
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bit = 0;

	while (xor)
	{
		bit += xor & 1;
		xor >>= 1;
	}

	return (bit);
}
