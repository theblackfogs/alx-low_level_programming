#include "main.h"

/**
 *_realloc - function
 *
 *Description: allocate memory
 *
 *@ptr: pointer
 *@old_size: integer parameter
 *@new_size: integer parameter
 *
 *
 *Return: NULL or pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_copy;

	free(ptr);
	return (mem);
}
