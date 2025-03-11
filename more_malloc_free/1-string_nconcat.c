#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * string_nconcat- adds two string together to the space of n
 * @s1: the base string
 * @s2: the string that will be added to the base string
 * @n: the amount of memory allowed for our s2
 * Return: the joined string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = malloc((strlen(s1) * sizeof(char)) +
			(strlen(s2) * sizeof(char)) + 1);
	unsigned int i = 0;
	unsigned int j  = 0;

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	if (n >= strlen(s2))
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i] = '\0';

	return (str);

}
