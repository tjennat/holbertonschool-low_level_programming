#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * struct dog - is my dog
 * @name: is the name of my dog
 * @age: is old bro
 * @owner: is me
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
