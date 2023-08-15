#include "main.h"


/**
 *_islower - function
 *
 * Description: print some text to the screen
 * @c: char parameter
 *
 * Return: interger value
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
