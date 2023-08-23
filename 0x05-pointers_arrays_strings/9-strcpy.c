#include "main.h"

/**
 *_strcpy - function
 *
 * Description:copy string
 * @dest:pointer of char parameter
 * @src:pointer of char parameter
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = strlen(src);

	for (i = 0; i <= length; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
