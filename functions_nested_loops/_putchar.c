#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The char that the function will return and print
 * Return: Write function with the c paramater
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
