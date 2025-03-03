#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * print_chessboard- prints the pieces of the chessboard
 * @a: The chessboard we want to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}

		printf("\n");
	}
}
