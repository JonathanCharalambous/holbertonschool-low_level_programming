#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * leet- converts a certain letters of a string with respective numbers
 * @s: string to convert
 * Return: the converted string
 */

char *leet(char *s)
{
	char letter[] = {'a', 'e', 'e', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letter[j] || s[i] == letter[j] - 32)
			{
				s[i] = num[i];
				break;
			}
		}

		i++;

	}

	return (s);
}
