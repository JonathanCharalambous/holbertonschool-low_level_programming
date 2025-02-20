#include "main.h"

/**
	* times_table - shows 9 times table in a grid
	* Return: void
*/

void times_table(void)
{
	int num;
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			num = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (num < 10)
			{
				_putchar(' ');
			}

			if (num >= 10)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar(num + '0');
			}
		}
		_putchar('\n');
	}
}
