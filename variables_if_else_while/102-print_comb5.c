#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Prints all possible
	* combinations of two digit pairs
	* Return: Always 0 (Success)
*/

int main(void)
{
	int n1 = 0;
	int n2 = 0;

	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');

			putchar(' ');

			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 == 98)
			{
				break;
			}

			putchar(',');
			putchar(' ');

			n2++;
		}

		n1++;
	}

	putchar('\n');
	return (0);
}
