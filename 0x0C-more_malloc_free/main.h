#ifndef MAIN_H_
#define MAIN_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int checker(char *s);
void usage(void);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
void *malloc_checked(unsigned int b);
#endif
