#include "main.h"

/**
 *_puts_recursion - function
 *
 * Description: print out string
 * @s: pointer parameter
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int size, i;

	size = strlen(s);

	for (i = 0; i < size; i++)
		_putchar(*(s + i));
	_putchar('\n');
}
