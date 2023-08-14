#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print some text to the screen
 * @void: no parameters
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
