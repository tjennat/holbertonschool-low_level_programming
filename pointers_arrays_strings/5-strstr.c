#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates a substring.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 * Return: start or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
