#include <stdio.h>

/**
 * before_main- function to run before the main
 * Return: void
 */
void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
