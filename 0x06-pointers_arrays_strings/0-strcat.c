#include "main.h"

/**
 *_strcat - function
 *
 * Description: combines two strings
 * @dest:pointer of char parameter
 * @src:pointer of char parameter
 *
 * Return: pointer of dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
