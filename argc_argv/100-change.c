#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main- prints the lowest number of coins need to make up the change
 * @argc: Number of command line inputs
 * @argv: Array of command line inputs
 * Return: 0 (Success) or 1 (Error)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", count);

	return (0);
}
