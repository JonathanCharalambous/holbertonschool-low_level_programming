#include <stdio.h>


/**
 * print_name- prints a variable name
 * @name: variable we want to print
 * @f: function call to print name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
