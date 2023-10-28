#include "main.h"
#include <stddef.h>
/**
 * _strchr - finding a char in a string
 * @s: point to src source memory area
 * @c: point to source memory area
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return ((c == '\0') ? s : NULL);
}

