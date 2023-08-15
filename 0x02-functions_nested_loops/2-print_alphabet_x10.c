#include "main.h"


/**
 * print_alphabet_x10 - function
 *
 * Description: print some text to the screen
 * @void: no parameters
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
