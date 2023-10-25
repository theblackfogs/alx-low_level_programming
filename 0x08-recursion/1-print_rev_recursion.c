#include "main.h"

/**
 *_print_rev_recursion - function
 *
 * Description: print out string
 * @s: pointer parameter
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
