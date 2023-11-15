#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - duplicate a string of char
 * @str: pointer to a string
 * Return: pointer to a string
 */

char *_strdup(char *str);

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(strlen(str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	{
		strcpy(s, str);
	}
	return (s);
}
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

	ouaoua = malloc(sizeof(dog_t));
	if (ouaoua == NULL)
		return (NULL);

	ouaoua->name = strdup(name);
	if (ouaoua->name == NULL)
	{
		free(ouaoua);
		return (NULL);
	}
	ouaoua->owner = strdup(owner);
	if (ouaoua->owner == NULL)
	{
		free(ouaoua->name);
		free(ouaoua);
		return (NULL);
	}

	ouaoua->age = age;

	return (ouaoua);
}
