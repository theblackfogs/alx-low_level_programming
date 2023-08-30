#include "main.h"

/**
 *factorial - function
 *
 * Description:calculate the factorials
 * @n:integer parameter
 *
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

