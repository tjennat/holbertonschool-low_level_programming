#include <stdio.h>

/**
 * main - Printing numberz
 * Return: 0 to sucess
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;

		if (digit <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
