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


void fibonacci2(void);

int main(void)
{
	fibonacci2();

	return (0);
}

/**
 *fibonacci2 - the first of 50 fibonacci
 *
 *Description: print some of fibonacci
 *@void: no paramters
 *
 *Return: nothing
 */


void fibonacci2(void)
{
	int i;
	long int first, second, total, sum;

	first = 1;
	second = 2;

	for (i = 3; i < 50; i++)
	{
		total = first + second;
		if (total % 2 == 0 && total < 4000000)
			sum += total;

		first = second;
		second = total;
	}

	printf("%ld\n", sum += 2);

}
