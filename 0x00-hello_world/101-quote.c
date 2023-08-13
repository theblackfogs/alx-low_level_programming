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
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	for (i = 0; quote[i] != '\0'; i++)
	{
		putchar(quote[i]);
	}

	return (1);
}
