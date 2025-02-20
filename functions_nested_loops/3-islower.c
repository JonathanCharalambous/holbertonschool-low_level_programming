#include "main.h"
#include <ctype.h>

/**
	* _islower - determines is a variable c is lowercase or not
	* @c: The character that will be checked
	* Return: 1 is lowercase 0 if not
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
