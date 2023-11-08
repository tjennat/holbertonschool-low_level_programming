#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space for dup string
 * @str: The input string to be duplicated.
 * Return: NULL or Duplicated
 */
char *_strdup(char *str)
{
	char *dup;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	dup = (char *)malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}

