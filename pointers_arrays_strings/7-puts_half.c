#include "main.h"

/**
 * puts_half - function that will print 2nd half string
 * @str: is my string
 *
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
	{
		length++;
	}

	start = length / 2;

	if (length % 2 != 0)
	{
		start = (length - 1) / 2;
	}

	for (i = start; i < length && i < start + 12; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
