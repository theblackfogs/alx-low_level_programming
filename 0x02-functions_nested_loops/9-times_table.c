#include "main.h"


/**
 *times_table - function
 *
 * Description: print some text to the screen
 * @void: no parameter
 *
 * Return: nothing
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i * 0);
		for (j = 1; j < 9; j++)
		{
			product = i * j;
			if (product < 10)
				printf(",  %d", product);
			else
				printf(", %d", product);

		}
		product = i * j;
		if (product < 10)
			printf(",  %d\n", product);
		else
			printf(", %d\n", product);

	}
}
