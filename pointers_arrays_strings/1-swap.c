#include "main.h"

/**
 * swap_int - swapping
 * @a: is the first var I want to switch
 * @b: is the second var I want to switch with
 */
void swap_int(int *a, int *b)
{
	int t;

	 t = *a;
	*a = *b;
	*b = t;
}
