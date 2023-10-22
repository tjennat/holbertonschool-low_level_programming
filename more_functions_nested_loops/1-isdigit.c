#include "main.h"

/**
 * _isdigit - gonna help to recognize if its a digit or not
 * @c: is my var can be digit or not
 * Return: 1 if it's a digit (0-9) , 0 if it's not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
