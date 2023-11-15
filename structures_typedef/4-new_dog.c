#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creating a new dog
 * @name: name is ouaoua
 * @age: is old bro
 * @owner: is me
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ouaoua;
	int a, b;

	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;

	ouaoua = malloc(sizeof(dog_t));
	if (ouaoua == NULL)
		return (NULL);

	ouaoua->name = strdup(name);
	ouaoua->owner = strdup(owner);

	if (ouaoua->name == NULL || ouaoua->owner == NULL)
	{
		free(ouaoua->name);
		free(ouaoua->owner);
		free(ouaoua);
		return (NULL);
	}

	ouaoua->age = age;

	return (ouaoua);
}
