#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers- prints all numbers input as arguments
 * @separator: the char to seperate each number
 * @n: number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num = 0;
	unsigned int i = 0;


	

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");


	va_end(args);
}
