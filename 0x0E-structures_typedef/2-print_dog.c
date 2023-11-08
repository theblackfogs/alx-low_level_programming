#include "dog.h"
/**
 * print_dog - print dog strcture
 * @d: structure
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		isnan(d->age) ? printf("Age: (nil)\n")  :  printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
