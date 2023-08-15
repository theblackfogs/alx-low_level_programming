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

	n = _isalpha('h');
	_putchar(n + '0');

	n = _isalpha('H');
	_putchar(n + '0');

	n = _isalpha('\0');
	_putchar(n + '0');
	return (0);
}
