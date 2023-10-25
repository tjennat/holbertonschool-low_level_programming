#include "main.h"

/**
 * _atoi - converting a string to an integer
 * @s: is my string
 * Return: result
 */
int _atoi(char *s)
{
	int x = 0;
	int moins = 1;
	unsigned int result = 0;

	while (s[x] != '\0')
	{
		if (s[x] >= '0' && s[x] <= '9')
			break;

		if (s[x] == '-')
		{
			moins = -1;
			x++;
		}
	}
	while (s[x] >= '0' && s[x] <= '9')
	{
		result = (result * 10) + (s[x] - '0');
		if (s[x] < '0' || s[x] > '9')
		{
			result *= moins;
			return (result);
		}
	}
	return (result);
}
