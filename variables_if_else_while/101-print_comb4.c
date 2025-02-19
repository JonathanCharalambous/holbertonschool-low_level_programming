#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Prints all possible lowest
	* combinations of three digits
	* Return: Always 0 (Success)
*/

int main(void)
{
	int n1 = '0';
	int n2 = '0';
	int n3 = '0';

	while (n1 <= '9')
	{
	n2 = n1 + 1;
	while (n2 <= '9')
	{
		n3 = n2 + 1;

		while (n3 <= '9')
		{
			putchar(n1);
			putchar(n2);
			putchar(n3);

			if (n1 == '7')
			{
				break;
			}

		putchar(',');
		putchar(' ');

		n3++;
		}

		n2++;
	}

	n1++;
	}

	putchar('\n');
	return (0);
}
