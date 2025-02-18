#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Prints the alphabet a-z
	* Return: Always 0 (Success)
*/

int main(void)
{
	char a = 'a';

	while (a != 'z' + 1)
	{
		putchar(a);
		a += 1;
	}
	putchar('\n');
	return (0);
}
