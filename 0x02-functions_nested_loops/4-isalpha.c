#include "main.h"


/**
 *_isalpha - function
 *
 * Description: print some text to the screen
 * @c: int parameter
 *
 * Return: interger value
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
