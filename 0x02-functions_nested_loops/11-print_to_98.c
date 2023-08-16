#include "main.h"


/**
 *print_to_98 - function
 *
 * Description: print some text to the screen
 * @n: int  parameter
 *
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("%d\n", 98);
	}
}
