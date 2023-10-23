#include "main.h"

/**
 * _strlen - count lenght of string
 * @len: lenght of my string
 */
int _strlen(char *s)
{
	int len = 0,ps = *s;

	while (ps != '\0')
		{
			len++;
			s++;
		}
	return (len);	
}
