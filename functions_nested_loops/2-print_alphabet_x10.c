#include "main.h"


/**
	* print_alphabet - Prints the alphabet 10 times
	* Return: No return
*/

void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 0;

	while (n <= 9)
	{
		while (a <= 'z')
		{
			_putchar(a);

			a++;
		}
		a = 'a';
		n++;
		_putchar('\n');
	}
}
