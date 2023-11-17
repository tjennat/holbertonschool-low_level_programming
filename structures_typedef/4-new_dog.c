#include "dog.h"
#include <string.h>

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
 * dog_t *new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;

    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);
    new_dog->name = _strdup(name);
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return (NULL);
    }
    new_dog->owner = _strdup(owner);
    if (new_dog->owner == NULL)
    {
        free(new_dog->name);
        free(new_dog);
        return (NULL);
    }
    new_dog->age = age;
    return (new_dog);
}
