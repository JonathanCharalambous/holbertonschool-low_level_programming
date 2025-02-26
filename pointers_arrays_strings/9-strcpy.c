#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * *_strcpy - copies a string
 * @dest: where the copied string will be stored
 * @src: the string to copy
 * Return: The src string copied
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	printf("\n");

	return (dest);
}
