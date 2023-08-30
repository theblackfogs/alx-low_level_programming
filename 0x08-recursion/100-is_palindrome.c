#include "main.h"

/**
 *is_palindrome - function
 *
 * Description: check for palindrome strings
 * @s:pointer of char parameter
 *
 * Return: integer value
 */

int is_palindrome(char *s)
{
	char first, last;

	first = *(s + 0);
	last = *(s + strlen(s) - 1);

	if (first == last)
		return (1);

	return (0);
}

