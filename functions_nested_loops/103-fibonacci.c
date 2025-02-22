#include <stdio.h>

/**
 * main - prints the sum of ever even fibonacci number
 * below 4,000,000
 * Return: Always 0 (Success)
*/

int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int n3 = 0;
	long int sum = 2;


	while (1)
	{
		n3 = n1 + n2;

		if (n3 > 4000000)
			break;

		if (n3 % 2 == 0)
			sum += n3;

		n1 = n2;
		n2 = n3;
	}

	printf("%ld\n", sum);
	return (0);
}
