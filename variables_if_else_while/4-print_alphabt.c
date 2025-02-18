#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Prints the alphabet a-z besides e and q
	* Return: Always 0 (Success)
*/

int main(void)
{
	char a = 'a';

	while (a != 'z' + 1)
	{
		if (a != 'q' || a != 'e')
		{
			putchar(a);
			a += 1;
		}
		if (a == 'q' || a == 'e')
		{
			a += 1;
		}
	}
	putchar('\n');
	return (0);
}
