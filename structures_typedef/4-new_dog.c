#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * new_dog - is my new dog
 * @name: is the name of my dog
 * @age: is old bro
 * @owner: is me
 */

dog_t new_dog(char name, float age, char owner)
{
	dog_touaoua;
	int a, b;


	for (a = 0; name[a]; a++)
		;
	for (b = 0; owner[b]; b++)
		;


	ouaoua = malloc(sizeof(dog_t));
	if (ouaoua == NULL)
		return (NULL);


	ouaoua->name = malloc(a + 1);
	ouaoua->owner = malloc(b + 1);

	if (ouaoua->name == NULL || ouaoua->owner == NULL)
	{

		free(ouaoua->name);
		free(ouaoua->owner);
		free(ouaoua);
		return (NULL);
	}


	_strcopy(ouaoua->name, name);
	_strcopy(ouaoua->owner, owner);
	ouaoua->age = age;

	return (ouaoua);
}
