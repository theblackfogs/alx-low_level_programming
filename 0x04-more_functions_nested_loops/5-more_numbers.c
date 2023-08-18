#include "main.h"

/**
 * more_numbers - function
 *
 * Description: print numbers from 0 to 14
 * @void: no parameter
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10 && j <= 14)
			{
				_putchar((j / 10) + '0');
			}
				_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
