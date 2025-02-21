#include "main.h"

/**
	* print_times_table - shows times table in a grid for variable n
	* n@: the number we will make the times table for
	* Return: void
*/

void print_times_table(int n)
{
	int num, col, row;

	if (n < 0 || n > 15)
	{
		return;
	}
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				num = row * col;
				if (col != 0)
				{
					_putchar(','), _putchar(' ');
					if (num < 10)
					{
						_putchar(' '), _putchar(' ');
					}
					else if (num < 100)
					{
						_putchar(' ');
					}
				}
				if (num >= 100)
				{
					_putchar((num / 100) + '0');
					_putchar(((num / 10) % 10) + '0'), _putchar((num % 10) + '0');
				}

				else if (num >= 10)
				{
					_putchar((num / 10) + '0'), _putchar((num % 10) + '0');
				}
				else
				{
					_putchar(num + '0');
				}
			}
			_putchar('\n');
		}
}
