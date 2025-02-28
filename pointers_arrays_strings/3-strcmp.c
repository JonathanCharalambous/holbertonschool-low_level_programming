#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * _strcmp - compares two string with eachother
 * @s1: initial string
 * @s2: string to be compared
 * Return: 0 if strings are equal, -1 if <, 1 if >
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
