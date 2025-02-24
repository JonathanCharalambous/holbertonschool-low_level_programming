#include <stdio.h>

/**
 * main - prints Fizz for multiples of 3
 * Buzz for multples of 5, FizzBuzz for 3 and 5,
 * or otherwise n
 * Return: Always 0
 */

int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
