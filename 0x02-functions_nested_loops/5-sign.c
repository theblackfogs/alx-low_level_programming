#include "main.h"


/**
 *print_sign - function
 *
 * Description: print some text to the screen
 * @n: int parameter
 *
 * Return: interger value
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);

		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);

		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);

		return (-1);
	}

	return (1);
}
