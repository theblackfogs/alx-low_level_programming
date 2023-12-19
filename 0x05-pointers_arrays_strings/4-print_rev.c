#include "main.h"

/**
 *print_rev - function
 *
 * Description: return the string length
 * @s:pointer of char parameter
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);
	len -= 1;
	for (i = 0; len >= i; len--)
		_putchar(*(s + len));
	_putchar('\n');
}

/**
 *_strlen - function
 *
 * Description: return the string length
 * @s:pointer of char parameter
 *
 * Return: integer of string length
 */

int _strlen(char *s)
{
	int i, length;

	length = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		length = i;
		i++;
	}
	if (length < 1)
		return (0);
	++length;
	return (length);
}
