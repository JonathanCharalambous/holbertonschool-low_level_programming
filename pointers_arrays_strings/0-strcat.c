#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * _strcat- concats two string together
 * @dest: initial string
 * @src: string to be added
 * Return: the intial string with the src added
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
