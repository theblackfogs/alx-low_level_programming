#include "main.h"

/**
 *print_rev - function
 *
 * Description: return the string length
 * @s:pointer of char parameter
 *
 * Return: nothing
 */

void print_rev(char *s)
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
		putchar('0');
	while (length >= 0)
	{
		printf("%c", *(s + length));
		length--;
	}
	putchar('\n');
}
