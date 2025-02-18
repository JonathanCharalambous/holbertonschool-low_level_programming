#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Prints the alphabet a-z and A-Z
	* Return: Always 0 (Success)
*/

int main(void)
{
	char a = 'a';
	char bigA = 'A';

	while (a != 'z' + 1)
	{
		putchar(a);
		a += 1;
	}

	while (bigA != 'Z' + 1)
	{
		putchar(bigA);
		bigA += 1;
	}

	putchar('\n');
	return (0);
}
