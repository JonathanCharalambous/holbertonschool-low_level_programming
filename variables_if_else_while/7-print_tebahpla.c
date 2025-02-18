#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Prints the alphabet z-a
	* Return: Always 0 (Success)
*/

int main(void)
{
	char a = 'z';

	while (a != 'a' - 1)
	{
		putchar(a);
		a -= 1;
	}
	putchar('\n');
	return (0);
}
