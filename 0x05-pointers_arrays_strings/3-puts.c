#include "main.h"

/**
 *_puts - function
 *
 * Description: print string to the screen
 * @str:pointer of char parameter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		printf("%c", *(str + i));
		i++;
	}
	if (i < 1)
		continue;
	putchar('\n');
}
