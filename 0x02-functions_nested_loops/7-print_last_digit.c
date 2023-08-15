#include "main.h"


/**
 *print_last_digit - function
 *
 * Description: print some text to the screen
 * @n: int parameter
 *
 * Return: interger value
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	n %= 10;
	_putchar(n + '0');

	return (n);
}
