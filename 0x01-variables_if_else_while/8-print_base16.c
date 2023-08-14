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
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
