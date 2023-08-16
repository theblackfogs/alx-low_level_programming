#include <stdio.h>



/**
 *main - Entry point
 *
 * Description: main function
 * @void: no parameter
 *
 *
 * Return: 0 (Success)
 */


void sum(void);

int main(void)
{
	sum();

	return (0);
}

/**
 *sum - simple summing function
 *
 *Description: print some of multiples
 *@void: no paramters
 *
 *Return: nothing
 */


void sum(void)
{
	int i, n;

	n = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			n += i;
		}
	}
	printf("%d\n", n);
}
