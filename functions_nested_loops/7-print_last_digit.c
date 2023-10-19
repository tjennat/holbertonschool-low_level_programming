#include "main.h"

/**
 * print_last_digit - Printing last digit by using modulo
 * @num: is my var
 * Return: to sucess
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (num < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar (last_digit + '0');
	return (last_digit);
}
