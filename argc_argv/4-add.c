#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers.
 * @argc: The number of arguments.
 * @argv: An array of arguments as strings.
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char **argv)
{
	int i, j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		j += num;
	}

	printf("%d\n", j);
	return (0);
}

