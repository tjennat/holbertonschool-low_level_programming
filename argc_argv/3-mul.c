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


	for (i = 1; i < argc; i++)
	{
		j = j * atoi(argv[i]);
	}
	printf("%d\n", j);

	return (0);
}
