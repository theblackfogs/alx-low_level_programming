#include "main.h"


/**
 * print_alphabet - function
 *
 * Description: print some text to the screen
 * @void: no parameters
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
