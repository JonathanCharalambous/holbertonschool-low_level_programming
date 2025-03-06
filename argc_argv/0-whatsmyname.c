#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the name of the program
 * @argc: Number of command line inputs
 * @argv: Array of command line inputs
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
