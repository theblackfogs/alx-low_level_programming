#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <math.h>
/**
 * struct dog - Dog details
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Dog structure
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
