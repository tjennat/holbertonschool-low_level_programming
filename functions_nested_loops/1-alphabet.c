#include <stdio.h>
#include "main.h"

/**
 * main - Using charput and char to recreate alphabet in lowercase
 * Return: 0 to sucess
 */
int main(void)
{
	char alphabet = 'a';
		while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
