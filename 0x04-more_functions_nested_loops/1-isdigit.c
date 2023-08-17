#include "main.h"

/**
 * _isdigit - function
 *
 * Description: checks if character is upper
 * @c: integer parameter
 *
 * Return: 1 for uppercase otherwise 0
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
