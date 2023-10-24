#include "main.h"

/**
 * _puts - printing a string with putchar
 * @str: is my string var
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s] != '\0')
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
