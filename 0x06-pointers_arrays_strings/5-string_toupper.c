#include "main.h"

/**
 *string_toupper - function
 *
 * Description: convert lowercase to upper
 * @s:pointer of char parameter
 *
 * Return: pointer address
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
			*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}
