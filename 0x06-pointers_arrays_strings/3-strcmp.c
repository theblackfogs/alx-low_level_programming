#include "main.h"

/**
 *_strcmp - function
 *
 * Description: combines two strings
 * @s1:pointer of char parameter
 * @s2:pointer of char parameter
 *
 * Return: difference value
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		j = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (j);
}
