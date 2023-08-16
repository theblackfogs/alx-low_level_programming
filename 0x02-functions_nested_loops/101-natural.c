#include <stdio.h>


/**
 *main - Entry point
 *
 * Description: main function
 * @void: no parameter
 *
 *
 * Return: 0 (Success)
 */

/**
 *multiples_1024 - function
 *
 * Description: print some text to the screen
 * @void: no  parameter
 *
 *
 * Return: nothing
 */


void multiples_1024(void);

int main(void)
{
	multiples_1024();

	return (0);
}
void multiples_1024(void)
{
	int i, n;

	n = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n += i;
		}
	}
	printf("%d\n", n);
}
