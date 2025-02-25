#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - prints a string str reversed
 * @s: string to print reversed
 * Return: void
 */

void rev_string(char *s)
{

	char temp;
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
		len++;

	for(i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i -1] = temp;
	}

}
