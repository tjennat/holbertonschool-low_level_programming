#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: min size of arr
 * @max: max size of arr
 * Return: NULL or arr
 */
int *array_range(int min, int max)
{
	int size;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = (int *)malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}

