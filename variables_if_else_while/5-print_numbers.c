#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Prints numbers 0 - 10
	* Return: Always 0 (Success)
*/

int main(void)
{

	int n = 0;

	while (n != 10)
	{
		printf("%d", n);
		n += 1;
	}
	putchar('\n');
	return (0);
}
