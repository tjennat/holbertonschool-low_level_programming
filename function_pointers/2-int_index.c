#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: is the array
 * @size: size of array
 * @cmp: a ptr
 * Return: minus one,or i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int result;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
