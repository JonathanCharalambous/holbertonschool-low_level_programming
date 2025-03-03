#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _strchr- concats two string together
 * @s: initial string
 * @c: the char we are looking for
 * Return: the string from the point of the found char
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;
	int k = strlen(s);
	char *str  = malloc((k + 1) * sizeof(char));

	while(s[i] != '\0')
	{
		if (s[i] == c)
		{
			for (j = 0; i < k; i++, j++)
				str[j] = s[i];
			
			str[j] = '\0';
			return (str);
		}
		
		i++;

	}
	
	return (NULL);
}
