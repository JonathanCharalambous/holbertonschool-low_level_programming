#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * more_numbers - prints numbers 0-14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar('1');

			_putchar((j % 10) + '0');
		}

		_putchar('\n');
	}

}
