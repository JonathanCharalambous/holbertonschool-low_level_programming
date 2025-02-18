#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Prints all possible different
	* combinations of two digits
	* Return: Always 0 (Success)
*/

int main(void)
{

	int n1 = 48;
	int n2 = 49;
	int reduce = 8;

	while (n1 != 57)
	{
		putchar(n1);
		putchar(n2);
		if (n1 == 56)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		if (n2 == 57)
		{
			n1 += 1;
			n2 -= reduce;
			reduce -= 1;
		}
		n2 += 1;

	}
	putchar('\n');
	return (0);
}
