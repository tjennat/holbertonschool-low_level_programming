#include "main.h"
#include <stdio.h>

/**
 * print_array - gonna print element of an array with coma and space
 *@a: is my pointer
 *@n: is the number of element of my array
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);

		if (x < n - 1)
		{
			printf(", ");
		}
			x++;
	}

			printf("\n");
}
