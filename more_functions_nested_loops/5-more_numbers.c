#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times.
 */
void more_numbers(void)
{
	int n, d;

	for (n = 0; n < 10; n++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar('0' + (d / 10));
			}
			_putchar('0' + (d % 10));
		}
		_putchar('\n');
	}
}
