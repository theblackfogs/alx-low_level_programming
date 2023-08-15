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

	print_last_digit(INT_MIN);
	print_last_digit(9);
	print_last_digit(89);
	print_last_digit(0);
	n = print_last_digit(-8484848);
	_putchar(n + '0');
	_putchar('\n');
	return (0);
}
