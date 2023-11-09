#include "main.h"

/**
 * string_nconcat - concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: is my pointer to the strings
 * Return: NULL or cat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *cat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	cat = malloc(sizeof(char) * (len + 1));

			if (cat == NULL)
			return (NULL);

			len = 0;

			for (i = 0; s1[i]; i++)
			cat[len++] = s1[i];

			for (i = 0; s2[i]; i++)
			cat[len++] = s2[i];

			cat[len] = '\0';
			return (cat);
}
