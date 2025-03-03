#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _strstr- checks for a substring
 * @haystack: The string we will search through
 * @needle: substring we are searching for
 * Return: found substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == '\0')
		return haystack;


	while (*haystack)
	{
		i = 0;

		while (haystack[i] == needle[i] && needle[i] != '\0')
			i++;

		if (needle[i] == '\0')
			return (haystack);


		haystack++;
	}

	return (NULL);
}
