#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long n1_high = 0;
	unsigned long n1_low = 0;
	unsigned long n2_high = 0;
	unsigned long n2_low = 0;
	unsigned long high = 0;
	unsigned long low = 0;
	int count;

	printf("%lu, %lu", n1, n2);

	for (count = 3; count <= 92; count++)
	{
		unsigned long next = n1 + n2;

		printf(", %lu", next);
		n1 = n2;
		n2 = next;
	}

	n1_high = n1 / 1000000000;
	n1_low = n1 % 1000000000;
	n2_high = n2 / 1000000000;
	n2_low = n2 % 1000000000;

	for (; count <= 98; count++)
	{
		high = n1_high + n2_high + ((n1_low + n2_low) / 1000000000);
		low = (n1_low + n2_low) % 1000000000;
		printf(", %lu%09lu", high, low);

		n1_high = n2_high;
		n1_low = n2_low;
		n2_high = high;
		n2_low = low;
	}

	printf("\n");
	return (0);
}
