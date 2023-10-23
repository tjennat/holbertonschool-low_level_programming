#include "main.h"

/**
 * _strlen - count lenght of string
 * @len: lenght of my string
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
		{
			len++;
			s++;
		}
	return (len);
	
}
