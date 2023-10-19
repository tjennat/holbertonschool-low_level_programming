#include "main.h"

/**
 * times_table - table times 9 reapeating 9 time
 * @a
 * @b
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 9 ; a++)
	{
		_putchar('0');

		for (b = 1 ; b <= 9 ; b++)
		{
			int result = a * b;

			_putchar(',');
			_putchar(' ');

			if (result < 10)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
