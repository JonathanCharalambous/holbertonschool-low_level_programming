#include "main.h"


/**
	* print_alphabet - Prints the alphabet
	* Return: No return
*/

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);

		a++;
	}
	_putchar('\n');
}
