#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * cap_string- uppercased the first letter of every word
 * @s: string to uppercase
 * Return: the intial string with the first letter of each word uppercased
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
			if (s[i] == separators[j])
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;


		i++;
	}

	return (s);
}
