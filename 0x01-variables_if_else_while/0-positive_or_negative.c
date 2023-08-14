#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Description: print some text to the screen
 * @void: no parameters
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	long int n = 0;
	
	srand(time(NULL));
	n = rand() % 100;

	if (n > 0)
	{
		printf("%ld is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%ld is zero\n", n);
	}
	else
	{
		printf("%ld is negative\n", n);
	}

	return (1);
}
