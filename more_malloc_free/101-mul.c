#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit- checks if a string on contains digits
 * @s: the string we want to check
 * Return: 0 if it contains a string, 1 if it does not
 */

int is_digit(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}


/**
 * multiply- multiplies the two digits which we have passed as strings
 * @n1: the first number
 * @n2: the second number
 * Return: void
 */

void multiply(char *n1, char *n2)
{
	int i = 0;
	int j = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int *result = malloc((len1 + len2) * sizeof(int));
	int mul = 0;
	int sum = 0;

	if (result == NULL)
	{
		printf("Error\n");
		free(result);
		exit(98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (n1[i] - '0') * (n2[j] - '0');
			sum = mul + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len2 + len1)
		putchar('0');
	else
		for (; i < len1 + len2; i++)
			putchar(result[i] + '0');
	putchar('\n');
	free(result);
}

/**
 * main- multiplies two numbers given as arguments
 * @argc: the number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);
	return (0);
}
