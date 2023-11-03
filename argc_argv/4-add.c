#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add n number
 * @argc: arg numb elem
 * @argv: arg string
 * Return: to sucess
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;


	for (j = 1 ; j < argc ; j++)
	{
		char *arg = argv[j];
		int isDigit = 1;

		for (i = 0 ; arg[i] != '\0' ; i++)
		{
			if (!isdigit(arg[i]))
			{
				isDigit = 0;
				break;
			}
		}
		if (isDigit)
		{
			sum += atoi(arg);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
