#include "main.h"

/**
 * is_prime_number - function
 *
 * Description: return number
 * @n: integer parameter
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
		return (0);
	else
		return (divisor(3, n));
}


/**
 * divisor - function
 *
 * Description: check number if its prime
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: prime number
 *
 */

int divisor(int a, int b)
{
	if (b % a == 0)
		return (0);
	else if (b / 2 > a)
		return (divisor(a + 2, b));
	else
		return (1);
}
