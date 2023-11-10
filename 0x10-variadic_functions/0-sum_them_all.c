#include "variadic_functions.h"

/**
 * sum_them_all - function
 *
 * Description: sum up all the arguments
 * @n: integer parameter
 * @...: elipsis
 *
 * Return: integer value
 *
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int sum;
	unsigned int i;
	va_list args;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);

	return (sum);
}
