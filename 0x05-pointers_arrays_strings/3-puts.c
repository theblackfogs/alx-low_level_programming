#include "main.h"

/**
 *_puts - function
 *
 * Description: print string to the screen
 * @str:pointer of char parameter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
