#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _strpbrk- checks for the first char not in accept
 * and counts the string len from there
 * @s: the string we will check
 * @accept: the chars discluded
 * Return: number of characters from the first char not present
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}


		s++;
	}

	return (NULL);
}
