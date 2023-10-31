#include <stdio.h>

/**
 * sqrt_root - function that calculates square
 * @n: is my var
 * @root: gonna be my var to calculate
 * Return: root or -one
 */
int sqrt_root(int n, int root)
{

	if (root * root == n)
		return (root);
	else if (root * root > n)
		return (-1);
	else
		return (sqrt_root(n, root + 1));
}

/**
 * _sqrt_recursion - do the recursion.
 * @n: An integer.
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_root(n, 0));
}
