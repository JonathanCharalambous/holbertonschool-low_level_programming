#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * find_sqrt- iterates a variable num2 until num1's sqrt is found
 * @num1: the number to find the sqrt for
 * @num2: number to iterate until num1 is reached
 * Return: sqrt of num1
 */

int find_sqrt(int num1, int num2)
{
	if (num2 * num2 == num1)
		return (num2);

	if (num2 * num2 > num1)
		return (-1);

	return (find_sqrt(num1, num2 + 1));
}

/**
 * _sqrt_recursion- finds the square root of n
 * @n: the number we will find the sqrt of
 * Return: sqrt of n
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	return (find_sqrt(n, 1));

}
