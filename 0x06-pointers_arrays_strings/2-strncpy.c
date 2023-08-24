#include "main.h"

/**
 *_strncpy - function
 *
 * Description: combines two strings
 * @dest:pointer of char parameter
 * @src:pointer of char parameter
 * @n: interger parameter
 *
 * Return: pointer of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
