#include "dog.h"

/**
 * init_dog - initializing dog
 * @d: is my ptr
 * @name: is the name of my dog
 * @age: is the age of my dog
 * @owner: is still me
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
