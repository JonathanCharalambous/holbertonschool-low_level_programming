#include <stdio.h>
#include <math.h>

/**
 * main - finds the larget prime factor of 612852475143
 *  Return: Always 0 (Success)
 */

int main(void)
{
	long int num = 612852475143;
	int i = 0;
	int largest = 0;

	while (num % 2 == 0)
		num /= 2;


	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
			num /= i;
	}

	if (num > 2)
	{
		if (num > largest)
			largest = num;
	}

	printf("%d\n", largest);

	return (0);
}
