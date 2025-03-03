#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _strspn- checks for the first char not in accept
 * and counts the string len from there
 * @s: the string we will check
 * @accept: the chars discluded
 * Return: number of characters from the first char not present
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int tru = 0;

	while (*s)
	{

		tru = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				tru = 1;
				break;
			}
		}

		if (!tru)
			return (count);

		count++;
		s++;
	}

	return (count);
}
