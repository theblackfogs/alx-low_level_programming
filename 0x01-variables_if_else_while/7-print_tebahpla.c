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

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
