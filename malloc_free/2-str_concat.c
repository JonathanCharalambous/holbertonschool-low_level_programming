#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * str_concat- joins two strings together
 * @s1: The base string
 * @s2: The string to add on
 * Return: the combined string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size = 0, i = 0, j = 0;
	char *s;

	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	while (s1[size] != '\0')
		size++;

	while (s2[i] != '\0')
	{
		i++;
		size++;
	}

	s = malloc((size + 1)  * sizeof(char));

	if (s == NULL)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		j++;
		i++;
	}

	s[i] = '\0';

	return (s);
}
