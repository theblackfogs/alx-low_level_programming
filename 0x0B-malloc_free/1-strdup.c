#include "main.h"

/**
 *_strdup - function
 *
 * Description: create a string copy
 * @str: char pointer
 *
 * Return: pointer of allocated memory
 */


char *_strdup(char *str)
{
	char *s;
	int size, i = 0;

	size = strlen(str);
	s = (char *)malloc(size * sizeof(char));

	if (size == 0 || str == NULL)
		return (NULL);

	while (i < size)
	{
		*(s + i) = *(str + i);
		i++;
	}

	return (s);
}
