#include "main.h"

/**
 * _pow_recursion - function to returns value of power with recursion
 * @x: is the var I want to raise to
 * @y: is the var I want to be raise to
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
