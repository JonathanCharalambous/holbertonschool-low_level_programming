#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * argstostr- concats arguments and prints them
 * @ac: the number of arguments
 * @av: our array of arguments
 * Return: The concated arguments
 */

char *argstostr(int ac, char **av)
{

	int i = 0, j = 0, k = 0, len = 0;
	char *str = "";

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;

		len++;
	}
	len++;

	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
