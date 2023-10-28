#include "main.h"

/**
 * _memset - returning pointer to modified area
 * @s: pointer
 * @b: is a char 
 * @n: uns int
 */
char *_memset(char *s, char b, unsigned int n) 
{
	char *start = s;

	while (n > 0) 
	{
		*s = b;
		s++;
		n--;
	}

	return (start);

}
