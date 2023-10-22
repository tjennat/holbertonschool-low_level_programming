#include "main.h"

/**
 * _isupper - gonna help to recognize if it's lower or upper
 * @c: is my var
 * Return: to sucess
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
