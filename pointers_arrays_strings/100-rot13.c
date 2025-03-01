#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * rot13- encodes a string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i = 0;

		while (s[i] != '\0')
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				if (s[i] < 'N')
					s[i] += 13;
				else if (s[i] >= 'N')
					s[i] -= 13;
			}
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				if (s[i] < 'n')
					s[i] += 13;
				else if (s[i] >= 'n')
					s[i] -= 13;
			}
			i++;
		}

	return (s);
}
