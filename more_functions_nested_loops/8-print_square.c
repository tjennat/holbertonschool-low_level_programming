#include "main.h"

/**
 * print_square - printing a square
 * @size: length and width of square
 */

void print_square(int size)
{
	int r;
	int c;

	if (size > 0)
	{
		for (r = 0; r < size; r++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
