#include "main.h"

/**
 * _isupper - function
 *
 * Description: checks if character is upper
 * @c: character parameter
 *
 * Return: 1 for uppercase otherwise 0
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
