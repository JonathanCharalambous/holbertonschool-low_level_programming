#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * _strncat- concats two string together
 * @dest: initial string
 * @src: string to be added
 * @n: max number of characters
 * Return: the intial string with the src added
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
