#include "main.h"

/**
 * puts_half - function that will print 2nd half string
 * @str: is my string
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int i, n;

	while (str[length] != '\0')
	{
		length++;
	}

	n = length / 2;

	if (length % 2 != 0)
	{
		n = (length + 1) / 2;
	}

	for (i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
