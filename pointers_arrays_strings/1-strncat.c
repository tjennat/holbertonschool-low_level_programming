#include "main.h"

/**
 * _strncat - is my function that concatenates two strings
 * @dest: is pointer to dest
 * @src: is pointer to src
 * @n: is numb of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
