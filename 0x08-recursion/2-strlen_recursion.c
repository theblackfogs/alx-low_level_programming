#include "main.h"

/**
 *int _strlen_recursion - function
 *
 * Description: print out string
 * @s: pointer parameter
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
