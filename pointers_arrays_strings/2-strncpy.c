#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * _strncpy- concats two string together
 * @dest: initial string
 * @src: string to be copied
 * @n: max number of characters
 * Return: the intial string with the src added
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;



	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
