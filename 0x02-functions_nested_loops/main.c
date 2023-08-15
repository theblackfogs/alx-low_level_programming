#include "main.h"


/**
 * main - Entry point
 *
 * Description: print some text to the screen
 * @void: no parameters
 *
 * Return: 0 
 */


int main(void)
{
	int n;

	n = print_sign(9);
	_putchar(n + '0');

	n = print_sign(0);
	_putchar(n + '0');

	n = print_sign(-9008);
	_putchar(n + '0');

	_putchar('\n');
	return (0);
}
