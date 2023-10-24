#include "main.h"

/**
 * print_rev - goal is to printing previous sentence reverse
 * @s: is the beginning of my string
 */
void print_rev(char *s)
{
	int len = 0;
	int t;

	while (s[len] != '\0')
	{
		len++;
	}

	for (t = len ; t >= 0 ; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}
