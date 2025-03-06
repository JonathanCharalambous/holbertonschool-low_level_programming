#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main- prints the sum of all command line arguments
 * @argc: Number of command line inputs
 * @argv: Array of command line inputs
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int num = 0;
	int j = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num += atoi(argv[i]);

	}

	printf("%d\n", num);

	return (0);
}
