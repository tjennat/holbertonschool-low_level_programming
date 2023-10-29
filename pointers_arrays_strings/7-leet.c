#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: correspond to the input string to encode
 * Return: A pointer to the modified string
 */
char *leet(char *str)
{
	char leet_map[] = {'a', 'e', 'o', 't', 'l'};
	char leet_replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet_map[j]; j++)
		{
			if (str[i] == leet_map[j] || str[i] == leet_map[j] - 'A' + 'a')
			{
				str[i] = leet_replace[j];
				break;
			}
		}
	}

	return str;
}

