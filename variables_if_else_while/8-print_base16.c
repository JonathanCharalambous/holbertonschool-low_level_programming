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
	char c = 'a';

	while (n != 58)
	{
		putchar(n);
		n += 1;
	}
	while (c != 'f' + 1)
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
