#include "main.h"

/**
 *int factorial - function
 *
 * Description: print out string
 * @n: integer parameter
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n -1));
}
