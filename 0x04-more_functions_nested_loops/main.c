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

	n = _isdigit('8');
	printf("c: %d : %d\n", 8, n);
	n = _isdigit('a');
	printf("c: %c : %d\n", 'a', n);
	return (0);
}
