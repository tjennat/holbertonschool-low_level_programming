#include "main.h"

/**
 * _strcmp - comparing two strings with ASCII table
 * @s1: pointer string one
 * @s2: pointer string two
 * Return: res and zero
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = (s1[i] - s2[i]);

		while (s1[i] != '\0' && s2[i] != '\0')
		{
			if (s1[i] != s2[i])
			return (res);
				i++;
		}
	return (0);
}
