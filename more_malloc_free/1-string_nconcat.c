#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _strlen- checks the length of a string
 * @s: the string to check the length of
 * Return: the length of the strong
 */

unsigned int _strlen(char *s)
{

	if (*s == '\0')
		return (0);


	return (1 + _strlen(s + 1));

}

/**
 * string_nconcat- adds two string together to the space of n
 * @s1: the base string
 * @s2: the string that will be added to the base string
 * @n: the amount of memory allowed for our s2
 * Return: the joined string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = "";
	unsigned int i = 0;
	unsigned int j  = 0;
	unsigned int s2_len;
	unsigned int s1_len;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	if (n < s2_len)
		s2_len = n;
	str = malloc(((s1_len + s2_len + 1) * sizeof(char)));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	if (n >= _strlen(s2))
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
