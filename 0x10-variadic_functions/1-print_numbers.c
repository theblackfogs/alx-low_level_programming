#include "variadic_functions.h"

/**
 * print_numbers - function
 *
 * Description: print numbers in argument list
 *
 * @separator: pointer parameter
 * @n: integer parameter
 * @...: elipsis
 *
 * Return: nothing
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		if (separator != NULL)
		{
			for (i = 0; i < n - 1; i++)
				printf("%d%s", va_arg(args, unsigned int), separator);
			printf("%d\n", va_arg(args, unsigned int));

		}
		else
		{
			for (i = 0; i < n; i++)
				printf("%d", va_arg(args, unsigned int));
			printf("\n");

		}

		va_end(args);

	}
}
