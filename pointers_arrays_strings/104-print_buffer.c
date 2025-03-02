#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"


/**
 * print_buffer- prints a buffer b
 * @b: the buffer we will be printing
 * @size: size of the buffer
 * Return: the intial string with the src added
 */

void print_buffer(char *b, int size)
{
	int i = 0;
	int j = 0;
	char c = ' ';

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}

		for (j = 0; j < 10 && (i + j) < size; j++)
		{
			c = b[i + j];
			printf("%c", isprint(c) ? c : '.');
		}

		printf("\n");
	}
}
