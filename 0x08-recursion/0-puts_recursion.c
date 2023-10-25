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
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
