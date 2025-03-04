#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * find_prime- determines if n is prime
 * @x: the numer to check
 * @y: number to iterate to check for prime
 * Return: 0 if prime 1 if not
 */

int find_prime(int x, int y)
{

	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);

	return (find_prime(x, (y + 1)));
}


/**
 * is_prime_number- determines if n is prime
 * @n: the numer to check
 * Return: 0 if prime 1 if not
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);

	return (find_prime(n, 2));
}
