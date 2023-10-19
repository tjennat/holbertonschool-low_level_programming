#include "main.h"

/**
 * print_to_98 - printing until 98 using loops
 * @n: all numbers
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98 ; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (; n >= 98 ; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
