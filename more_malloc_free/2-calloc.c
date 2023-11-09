#include "main.h"

/**
 * _calloc - is the function that gonna recreate calloc
 * @nmemb: numb of element in my array
 * @size: siz of each element in bytes
 * Return: NULL or ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
