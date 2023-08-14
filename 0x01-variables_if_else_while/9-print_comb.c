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
	int j;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		for (j = 44; j > 31; j -= 12)
			putchar(j);
	}
	putchar(57);
	putchar('\n');

	return (0);
}
