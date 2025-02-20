#include <unistd.h>
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The char that the function will return and print
 * Return: Write function with the c paramater
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Prints "_putchar" followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{

	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);

}
