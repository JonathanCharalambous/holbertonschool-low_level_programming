#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * create_array- creates an array of chars filled with a variable c
 * @size: the size of the array
 * @c: the characters to fill the array
 * Return: the filled array
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i = 0;
	char *s = malloc(size * sizeof(char));

	if (size == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);



}
