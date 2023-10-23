#include"main.h"
/**
 * _strlen - count lenght of string
 * @s: lenght of my string
 * Return:returns the length of a string.
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
