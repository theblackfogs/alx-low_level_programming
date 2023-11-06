#include "dog.h"
/**
 * init_dog - initialize dog structure
 * @d: structure
 * @name: first
 * @age: second
 * @owner: last
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
