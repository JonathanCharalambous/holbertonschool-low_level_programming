#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings- prints all words input as arguments
 * @separator: the char to seperate each number
 * @n: number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s = "";
	unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		s = va_arg(args, char *);
		printf("%s", s);
			
		if (s == NULL)
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");


	va_end(args);
}
