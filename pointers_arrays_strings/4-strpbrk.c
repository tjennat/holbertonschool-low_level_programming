#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - search a sring for any set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr, *a_ptr;

	for (s_ptr = s; *s_ptr; s_ptr++)
	{
		for (a_ptr = accept; *a_ptr; a_ptr++)
		{
			if (*s_ptr == *a_ptr)
			{
				return (s_ptr);
			}
		}
}
	return (NULL);
}
