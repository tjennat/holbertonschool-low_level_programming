#include "main.h"

/**
 * _print_rev_recursion - function rev but in recursive
 * @s: is pointer to the string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
