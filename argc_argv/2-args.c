#include "main.h"

/**
 * main - 
 * @argc: argu var
 * @argv: argu var
 * Return: zero
 */
int main(int argc, char **argv)
{
	int i;

	while (i < argc)
	{
	printf("%s\n", argv[i]);
	i++;
	}
	return (0);
}
