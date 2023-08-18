#include "main.h"

/**
 * print_triangle - function
 *
 * Description: print triangle figure
 * @size: integer parameter
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (z = size - i; z > 0; z--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
