#include <stdio.h>

void fizz_buzz(void);

/**
 * main - Entry point
 *
 * Description: call the function fizz buzz
 *@void: no parameters
 *Return: 0 for success
 */


int main(void)
{
	fizz_buzz();

	return (0);
}

/**
 * fizz_buzz - function
 *
 * Description: print fizz buzz and numbers
 * @void: no parameters
 *
 * Return: nothing
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
}
