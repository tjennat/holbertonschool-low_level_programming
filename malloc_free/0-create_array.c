#include "main.h"

/**
 * create _array - creating an array calculating
 * @size: size of the array
 * @c: is my char that's going to point
 * Return: Arr or null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c; 
	return (arr);
}
