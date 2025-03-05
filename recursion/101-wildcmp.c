#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _strcmp- comapares two string to check if they are equal
 * @s1: first string to compare
 * @s2: second string to command
 * Return: 1 if strings are equal otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || 
				(*s1 != '\0' && wildcmp(s1 + 1, s2)));
	
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
