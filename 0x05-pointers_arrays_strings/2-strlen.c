#include "main.h"

/**
 *_strlen - function
 *
 * Description: return the string length
 * @s:pointer of char parameter
 *
 * Return: integer of string length
 */

int _strlen(char *s)
{
	int i, length;

	length = 0;
	i = 0;

	while (*(s + i) != '\0')
	{
		length = i;
		i++;
	}
	if (length < 1)
		return (0);
	++length;
	return (length);
}
