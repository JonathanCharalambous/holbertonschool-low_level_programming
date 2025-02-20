#include "main.h"
#include <ctype.h>

/**
	* _isalpha - determines is a variable c is alpha or not
	* @c: The character that will be checked
	* Return: 1 is lowercase 0 if not
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
