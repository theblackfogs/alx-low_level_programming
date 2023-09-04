#include "main.h"

/**
 *create_array - function
 *
 * Description: create an array
 * @size: integer
 * @c: char
 *
 * Return: pointer of dest
 */


char *create_array(unsigned int size, char c)
{
	char *str;

	str = (char *)malloc(size * sizeof(char) );

	if (size == 0 || str == NULL)
		return (NULL);

	*str = c;
	return (str);
}
