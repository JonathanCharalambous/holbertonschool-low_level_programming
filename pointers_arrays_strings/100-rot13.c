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
	char base;

	while (s[i] != '\0')
	{
		base =
		(s[i] >= 'a' && s[i] <= 'z') * 'a' + (s[i] >= 'A' && s[i] <= 'Z') * 'A';

		if (base)
		{
			s[i] = base + ((s[i] - base + 13) % 26);
		}
		i++;
	}


	return (s);
}
