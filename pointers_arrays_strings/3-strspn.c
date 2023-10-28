#include "main.h"

/**
 * _strspn - length prefix substring
 * @accept: point to src source memory area
 * @s: point to source memory area
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;
		int found = 0;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
