#include "main.h"

/**
 *main - Entry point
 *
 *Description: main function
 *@argc: integer parameter
 *@argv: string pointer
 *
 *Return: 0 for suceess and 98 for error
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2, check;

	if (argc < 2 || argc > 3)
		usage();
	if (checker(argv[1]) == 2000 || checker(argv[2]) == 2000)
		usage();
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);

	return (0);
}

/**
 *usage - function
 *
 * Description: check for errors
 * @void
 *
 * Return: nothing
 *
 */

void usage(void)
{
	printf("Error\n");
	exit(98);
}

/**
 *checker - function
 *
 *Description: check if string has numbers only
 *
 *@s: char pointer
 *
 *Return: integer 1000 or 2000
 */


int checker(char *s)
{
	int i, j, num;

	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) - '0' > 9)
				return (2000);
		}
	}

	return (1000);
}
