#include "main.h"


/**
 *jack_bauer - function
 *
 * Description: print some text to the screen
 * @void: no parameter
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i <= 9)
			{
				if (j <= 9)
					printf("0%d:0%d\n", i, j);
				else
					printf("0%d:%d\n", i, j);
			}
			else
			{
				if (j <= 9)
					printf("%d:0%d\n", i, j);
				else
					printf("%d:%d\n", i, j);
			}
		}
	}
}
