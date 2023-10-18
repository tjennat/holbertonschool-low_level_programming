#include <stdio.h>

/**
 * main - Using charput and char to recreate alphabet in lowercase
 * Return: 0 to sucess
 */
int main(void)
{
	char alphabet = 'z';
		while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
