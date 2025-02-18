#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Prints numbers 0 - 10
	* Return: Always 0 (Success)
*/

int main(void)
{
	int n = 48;

	while (n != 58)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		n += 1;
	}

	putchar('\n');
	return (0);
}
