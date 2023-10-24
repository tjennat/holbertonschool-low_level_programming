#include "main.h"

/**
 * rev_string - goal is to print previous a reverse string
 * @s: is the string that gonna be reversed
 *
 */
void rev_string(char *s)
{
	char tmp;
	int i, len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len = len - 1;

	for (i = 0; i < len; i++, len--)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
	}
}
