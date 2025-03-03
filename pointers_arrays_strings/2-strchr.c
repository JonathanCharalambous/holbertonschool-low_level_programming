#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _strchr- concats two string together
 * @s: initial string
 * @c: the char we are looking for
 * Return: the string from the point of the found char or NULL
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return s;	
		}

		s++;
	}
	
	return (NULL);
}
