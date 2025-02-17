#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * Return: Always 1 (Success)
*/
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quote, strlen(quote));
	return 1;
}
