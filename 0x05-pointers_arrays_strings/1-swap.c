#include "main.h"

/**
 *swap_int - function
 *
 * Description: swap the values of a and b
 * @a:pointer of integer parameter
 * @b:pointer of integer parameter
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;

}
