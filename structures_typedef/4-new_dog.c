#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ouaoua;

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
