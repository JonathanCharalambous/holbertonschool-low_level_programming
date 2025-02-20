#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i <= 23)
	{

		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');

			_putchar(':');

			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');

			j++;

			_putchar('\n');

		}
		i++;
		j = 0;
	}
}
