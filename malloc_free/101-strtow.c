#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * word_count- counts the number of words in a string
 * @s: the string to count
 * Return: The number of words
 */

int word_count(char *s)
{
	int count = 0, i = 0;

	while (s[i])
	{
		while (s[i] == ' ')
			i++;

		if (s[i])
		{
			count++;
			while (s[i] && s[i] != ' ')
				i++;
		}
	}

	return (count);
}


/**
 * strtow- extracts words from a string and prints them
 * @str: the string to search
 * Return: The extracted words
 */

char **strtow(char *str)
{

	int i = 0, j = 0, k = 0, words = 0, len = 0;
	char **arr = NULL;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	arr = malloc((words + 1) * sizeof(char *));

	for (j = 0; j < words; j++)
	{
		while (str[i] == ' ')
			i++;

		while (str[i + len] && str[i + len] != ' ')
			len++;

		arr[j] = malloc((len + 1) * sizeof(char));
		if (arr[j] == NULL)
		{
			while (j--)
				free(arr[j]);
			free(arr);
			return (NULL);
		}

		for (k = 0; k < len; k++)
			arr[j][k] = str[i++];
		arr[j][k] = '\0';

		len = 0;
	}

	arr[words] = NULL;
	return (arr);


}
