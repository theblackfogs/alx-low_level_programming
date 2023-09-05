#include "main.h"

/**
 *str_concat - function
 *
 * Description: create a string copy
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: pointer of allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int size, length, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2);
	j = size - strlen(s2);
	str = (char *)malloc(size * sizeof(char) + 1);
	length = strlen(s1);

	while (i < length)
	{
		*(str + i) = *(s1 + i);
		i++;
	}

	for (i = 0; j < size; i++)
	{
		*(str + j) = *(s2 + i);
		j++;
	}

	return (str);
}
