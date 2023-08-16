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


void fibonacci1(void);

int main(void)
{
	fibonacci1();

	return (0);
}

/**
 *fibonacci1 - the first of 50 fibonacci
 *
 *Description: print some of fibonacci
 *@void: no paramters
 *
 *Return: nothing
 */


void fibonacci1(void)
{
	int i;
	long int first, second, total;

	first = 1;
	second = 2;

	printf("%d, %d, ", 1, 2);

	for (i = 3; i < 50; i++)
	{
		total = first + second;
		printf("%ld, ", total);

		first = second;
		second = total;
	}
	total += first;
	printf("%ld\n", total);

}
