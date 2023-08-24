#include "main.h"

/**
 *_strncat - function
 *
 * Description: combines two strings
 * @dest:pointer of char parameter
 * @src:pointer of char parameter
 * @n: interger parameter
 *
 * Return: pointer of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
