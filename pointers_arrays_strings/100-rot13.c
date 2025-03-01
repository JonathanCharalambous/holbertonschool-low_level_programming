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
		if (((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) && 
				(base = (s[i] >= 'a') * ('a' - 'A') + 'A'))
		{
			s[i] = base + ((s[i] - base + 13) % 26);
		}
		i++;
	}
	
	return (s);
}
