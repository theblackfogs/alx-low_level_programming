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
	int i, j, n, reset;

	n = 0;

	for (i = 0; i < 10; i++)
	{
		reset = i;

		if (i == 0)
		{
			for (j = 0; j < 9; j++)
				printf("%d,  ", 0);
			printf("%d", 0);
			i = reset;
			printf("\n");
		}
		else if (i == 1)
		{
			for (j = 0; j < 9; j++)
			{
				if (j == 0)
					printf("%d,  ", 0);
				else
					printf("%d,  ", n += 1);
			}
			printf("%d", n += 1);
			i = reset;
			n = 0;
			printf("\n");
		}
		else if (i == 2)
		{
			for (j = 0; j < 9; j++)
			{
				if (j == 0)
					printf("%d, ", 0);
				else
				{
					if (n < 10)
						printf("%d,  ", n += 2);
					else
						printf("%d, ", n += 2);
				}
			}
			printf("%d", n += 2);
			i =  reset;
			n = 0;
			printf("\n");
		}

	}
}
