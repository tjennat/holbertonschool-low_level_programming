#include "main.h"

/**
 * is_prime_recursive - Helper function to check if a number is prime
 * @n: number checking primalty
 * @divisor: current divisor to test
 * Return: one or zero
 */
int is_prime_recursive(int n, int divisor)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Check if an integer is a prime number
 * @n: number
 * Return: one or zero
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_recursive(n, 2));
}

