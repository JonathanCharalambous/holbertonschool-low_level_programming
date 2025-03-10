#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * factorial- finds the factorial of the given n
 * @n: the number we will find the factorial of
 * Return: the factorial of n
 */
 
char *create_array (unsigned int size, char c)
{
    unsigned int i = 0;
    char *s = malloc(size * sizeof(char));

    for (i = 0; i < size; i++)
    {
    	s[i] = c;
    }

    return (s);



}
