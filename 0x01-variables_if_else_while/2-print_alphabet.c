#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
