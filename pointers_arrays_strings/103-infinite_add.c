#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "main.h"


/**
 * infinite_add- concats two string together
 * @n1: first number
 * @n2: second number
 * @r: the result
 * @size_r: the size of the buffer
 * Return: The result or 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int sum = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	if (size_r <= ((int)strlen(n1) > (int)strlen(n2) ?
				(int)strlen(n1) : (int)strlen(n2)) + 1)
		return (0);

	i = strlen(n1) - 1;
	j = strlen(n2) - 1;
	r[size_r - 1] = '\0';
	k = size_r - 2;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';

		if (j >= 0)
			sum += n2[j--] - '0';

		if (k < 0)
			return (0);

		r[k--] = (sum % 10) + '0';
		carry = sum / 10;
	}

	return (&r[k + 1]);
}
