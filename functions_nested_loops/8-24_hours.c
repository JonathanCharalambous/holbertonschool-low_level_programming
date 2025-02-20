#include "main.h"

/**
 * jack_bauer - prints every minute of every hour
 * Return: void
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
