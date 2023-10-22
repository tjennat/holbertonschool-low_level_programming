#include "main.h"

/**
 * print_most_numbers - printing 0 to 9 without 2 and 4
 * @n: my number that's going to be printed
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
	}
	_putchar('\n');
}
