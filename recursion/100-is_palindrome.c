#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * _strcmp- comapares two string to check if they are equal
 * @s1: first string to compare
 * @s2: second string to command
 * Return: 0 if strings are equal otherwise 1
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	if (*s1 != *s2)
		return (1);

	return (_strcmp(s1 + 1, s2 + 1));
}

/**
 * _strlen- checks the length of a string
 * @s: the string to check the length of
 * Return: the length of the strong
 */

int _strlen(char *s)
{

	if (*s == '\0')
		return (0);


	return (1 + _strlen(s + 1));

}

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
	int len = _strlen(s);
	char sRev[1000];

	reverse_string(s, sRev, 0, len);

	return (_strcmp(s, sRev) == 0);
}
