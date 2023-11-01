#include "main.h"

/**
 * _strlen_recursion - length of the string with recursive
 * @s: pointer to the string
 * Return: recursion
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	else
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
}
