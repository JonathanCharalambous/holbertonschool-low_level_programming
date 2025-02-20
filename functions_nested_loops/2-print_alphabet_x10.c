#include "main.h"


/**
	* print_alphabet - Prints the alphabet 10 times
	* Return: No return
*/

void print_alphabet_x10(void)
{
	char a = 'a';

	for (int n = 0; n < 10; n++)
	{
		while (a <= 'z')
		{
			_putchar(a);

			a++;
		}
		a = 'a';
		_putchar('\n');
	}
	_putchar('\n');
}
