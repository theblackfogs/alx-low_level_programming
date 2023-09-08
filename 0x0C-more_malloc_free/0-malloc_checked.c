#include "main.h"

/**
 *malloc_checked - function
 *
 *Description: check if memory is allocated
 *
 *@b: integer parameter
 *
 *Return: NULL or pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
