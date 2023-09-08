#include "main.h"

/**
 *array_range - function
 *
 *Description: create an array of integer
 *
 *@min: integer parameter
 *@max: integer parameter
 *
 *Return: NULL or pointer to an array
 */


int *array_range(int min, int max)
{

	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min;
	ptr = (int *) malloc(sizeof(int) * size + 1);

	if (ptr == NULL)
		return (NULL);

	
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
