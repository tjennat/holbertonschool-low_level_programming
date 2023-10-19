#include <stdio.h>
#include "main.h"

/**
 * _isalpha - gonna help to recognize if it's lower or upper
 * @c: is my var
 * Return: to sucess
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
