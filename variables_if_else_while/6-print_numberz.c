#include <stdio.h>

/**
 * main - Printing numbers
 * Return: 0 to sucess
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
