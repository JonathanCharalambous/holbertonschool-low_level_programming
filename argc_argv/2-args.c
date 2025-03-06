#include <stdio.h>
#include <stdlib.h>


/**
 * main- prints the argv array
 * @argc: Number of command line inputs
 * @argv: Array of command line inputs
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
