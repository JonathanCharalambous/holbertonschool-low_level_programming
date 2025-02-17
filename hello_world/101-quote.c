#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quote, strlen(quote));
	return 1;
}
