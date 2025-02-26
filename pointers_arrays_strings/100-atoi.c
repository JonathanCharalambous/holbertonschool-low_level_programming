#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - extracts and converts a string into an int
 * @s: the string we will be extracting from
 * Return: the extracted int
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int num = 0;
	int sign = 1;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = (num * 10) + (s[i] - '0');
				i++;
			}

			break;
		}

		i++;
	}

	num = num * sign;
	return (num);
}
