#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Using charput to alphabet x10
 * Return: alphabet to sucess
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{

		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			putchar(alphabet);
			alphabet++;
		}
		putchar('\n');
		a++;
	}}
