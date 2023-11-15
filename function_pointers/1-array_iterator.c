#include "function_pointers.h"

/**
 * array_iterator - is a function that iterate
 * @array: is my array
 * @size: is the size of the array
 * @action: is my pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t con;

	if (array != NULL && *action != NULL)
	{
		for (con = 0; con < size; con++)
		{
			action(array[con]);
		}
	}
}
