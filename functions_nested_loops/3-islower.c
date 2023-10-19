#include <stdio.h>
#include "main.h"

/**
 * _islower - gonna help to recognize if it's lower or upper
 * @c: is my var
 * Return: to sucess
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
