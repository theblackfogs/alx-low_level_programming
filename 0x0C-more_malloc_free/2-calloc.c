#include "main.h"

/**
 *_calloc - function
 *
 *Description: create an array of integer
 *
 *@nmeb: integer parameter
 *@size: integer parameter
 *
 *Return: NULL or pointer to an array
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;
	
	if (nmeb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmeb * size);

	if (arr == NULL)
		return (NULL);
	
}
