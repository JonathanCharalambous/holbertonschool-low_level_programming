#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the number of command line arguments
 * @argc: Number of command line inputs
 * @argv: Array of command line inputs
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
