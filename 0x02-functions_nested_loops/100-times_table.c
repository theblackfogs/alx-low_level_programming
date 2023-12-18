#include "main.h"


/**
 * print_times_table - function
 *
 * Description: print multi table of n
 * @n: integer parameter
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 0 && n < 16)
	{
		for (i = 0; i <= n; i++)
		{
			printf("%d", i * 0);
			for (j = 1; j < n; j++)
			{
				product = i * j;
				if (product < 10)
					printf(",   %d", product);
				else
				{
					if (product < 100)
						printf(",  %d", product);
					else
						printf(", %d", product);
				}
			}
			product = i * j;
			if (product < 10)
				printf(",   %d\n", product);
			else
			{
				if (product < 100)
					printf(",  %d\n", product);
				else
					printf(", %d\n", product);
			}
		}
	}
	else if (n == 0)
		printf("%d\n", 0);
}
