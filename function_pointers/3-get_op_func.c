#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func- determines the operation needed to complete the calculation
 * @s: the char we need to check
 * Return: The function with the correct calculation or NULL
 */


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return  (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
