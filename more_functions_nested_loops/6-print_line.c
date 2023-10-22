#include "main.h"

/**
 * print_line - Printing a line with  _
 * @n: number of times '_' should be printed.
 * */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}

