#include <stdio.h>
#include <ctype.h>
#include "main.h"
#include <string.h>
/**
 * _strlen - counts the size of a string s
 * @s: string to check
 * Return: length on variable s
 */
int _strlen(char *s)
{

	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	return (len);

}
