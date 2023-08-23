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
	int i, j, last;
	int length2, limit, x;

	x = 0;
	length2 = sizeof(src);
	for (i = 0; *(dest + i) != '\0'; i++)
		last = i;

	limit = last + length2;

	for (j = last + 1; j < limit; j++)
	{
		*(dest + j) = *(src + x);
		x++;
	}
	*(dest + limit) = '\0';

	return (dest);
}
