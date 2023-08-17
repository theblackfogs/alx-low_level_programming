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

	n = _isupper(80);
	printf("c: %c : %d\n", 80, n);
	n = _isupper(122);
	printf("c: %c : %d\n", 122, n);
	return (0);
}
