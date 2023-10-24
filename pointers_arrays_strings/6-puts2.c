#include "main.h"

/**
 * puts2 - is a function that will read content of a string
 * @str: is my var for string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
