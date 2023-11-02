#include "main.h"

/**
 * main - multiplicate two numbers
 * @argc: argu var
 * @argv: argu var
 * Return: zero
 */
int main(int argc, char **argv)
{
	int i;
	int j = 1;


	if (argc >= 3)
	{

	for (i = 1; i < argc; i++)
	{
		j = j * atoi(argv[i]);
	}
	printf("%d\n", j);
	}

	if (argc < 3)
		printf("Error\n");

	return (0);
}
