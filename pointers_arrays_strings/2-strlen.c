#include "main.h"

/**
 * _strlen - count lenght of string
 * @len: lenght of my string
 * @ptr: is my var that translate *s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		{
			len++;
		}
	return (len);	
}
