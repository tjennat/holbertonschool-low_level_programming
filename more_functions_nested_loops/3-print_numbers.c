#include "main.h"

/**
 * print_numbers - printing numers with putchar
 * Return:  to success
 */
void print_numbers(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
}
