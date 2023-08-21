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

	i = 0;

	while (*(s + i) != '\0')
	{
		length = i;
		i++;
	}
	++length;

	return (length);
}
