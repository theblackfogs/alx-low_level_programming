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

	n = _abs(-78);
	printf("%d", n);
	n = _abs(0);
	printf("%d",n);
	n = _abs(65);
	printf("%d", n);

	return (0);
}
