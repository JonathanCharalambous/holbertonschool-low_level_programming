#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * reverse_string- reverses our string s using recursion
 * @s: The string to reverse
 * @rev: Buffer to hold the reversed string
 * @index: index used to iterate through the string
 * @len: length of the string
 * Return: none
 */

void reverse_string(char *s, char *rev, int index, int len)
{
	if (index >= len)
	{
		rev[len] = '\0';
		return;
	}

	rev[len - index - 1] = s[index];
	reverse_string(s, rev, index + 1, len);
}

/**
 * is_palindrome- determines if a number is a palindrome or not
 * @s: the string we will check
 * Return: 1 if s is a palindrome 0 if not
 */
 
int is_palindrome(char *s)
{
	int len = strlen(s);
	char *sRev = (char *)malloc(sizeof(char) * (len + 1));

	reverse_string(s, sRev, 0, len);

	return (strcmp(s, sRev) == 0);
}
