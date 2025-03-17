#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main- finds the result of the calculation
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc,char *argv[])
{
	
	char *op = argv[2];
	int (*calc)(int, int) = get_op_func(op);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '*') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));

	
	return (0);
}
