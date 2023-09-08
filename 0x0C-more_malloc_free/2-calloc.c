#include "main.h"

/**
 *_calloc - function
 *
 *Description: allocate memory
 *
 *@nmemb: integer parameter
 *@size: integer parameter
 *
 *Return: NULL or pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int i;


	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (memory);
}
