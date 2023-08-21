#include "main.h"

/**
 *print_array - function
 *
 * Description: swap the values of a and b
 * @a:pointer of integer parameter
 * @n:pointer of integer parameter
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i, last;

	if (n > 0)
	{
		last = n - 1;

		for (i = 0; i < last; i++)
		{
			printf("%d, ", *(a + i));
		}
		printf("%d\n", *(a + last));
	}
	else
	{
		printf("e");
		fprintf(stderr, " ");
	}
}
