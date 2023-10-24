#include "main.h"

/**
 * puts2 - is a function that will read content of a string
 * @str: is my var for string
 */
void puts2(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s += 2;
	}

	_putchar('\n');
}
