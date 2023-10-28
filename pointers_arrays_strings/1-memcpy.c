#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: point to src source memory area
 * @src: point to source memory area
 * @n: uns int representing n bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}

	return (dest);
}
