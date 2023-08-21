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
	int num;
	int *nump;

	num = 100;
	nump = &num;
	printf("Value of num: %d\n", num);
	reset_to_98(nump);
	printf("After, the value is, %d\n", num);
	return (0);
}
