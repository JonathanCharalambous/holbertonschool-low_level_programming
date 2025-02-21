#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
	* print_to_98: prints every number until the int n
	* @n: The number we will print to
	* Return: void
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			if (n < 97)
			{
				break;
			}
			printf(", ");
			n++;
		}
	}

	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			if (n > 97)
			{
				break;
			}
			printf(", ");
			n--;
		}
	}
	if (n == 98)
	{
		printf("%d ", n);
	}


}
