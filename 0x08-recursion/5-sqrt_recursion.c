#include "main.h"

/**
 *_sqrt_recursion - function
 *
 * Description: print out string
 * @n: integer parameter
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrot(n, 1));
}


/**
 * _sqrot - function
 *
 * Description: return number
 * @n: integer parameter
 * @i: integer parameter
 *
 * Return: square root
 *
 */

int _sqrot(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrot(n, i + 1));
}
