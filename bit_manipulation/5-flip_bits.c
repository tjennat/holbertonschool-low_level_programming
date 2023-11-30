#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to get from one number to another
 * @n: first num
 * @m: second num
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

