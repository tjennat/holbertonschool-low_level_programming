#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Using charput and char to recreate alphabet in lowercase
 * Return: alphabet to sucess
 */
void print_alphabet(void)
{
	char alphabet = 'a';
		while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
}
