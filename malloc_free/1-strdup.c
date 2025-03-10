#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _strdup- creates an array of chars filled with a variable c
 * @str: The string to copy
 * Return: the copied string
 */

char *_strdup(char *str)
{

	unsigned int i = 0;
	char *s;

	while (str[i]!= '\0')
		i++;

	s = malloc((i + 1)  * sizeof(char));

	if (s == NULL)
                return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';

	return (s);



}
