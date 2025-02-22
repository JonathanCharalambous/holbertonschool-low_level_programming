#include <stdio.h>

/**
 * printFib - calculates the fibonacci sequence to
 * the desired number
 * @n: The number to which the sequence is calculated
 * Return: void
 */


void printFib(int n)
{
	static long int n1;
	static long int n2 = 1;
	static long int n3;

	if (n == 0)
		return;

	n3 = n1 + n2;
	printf("%ld ", n3);
	n1 = n2;
	n2 = n3;
	printFib(n - 1);
}


/**
 * main - prints the fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{

	printFib(52 - 2);

	return (0);
}
