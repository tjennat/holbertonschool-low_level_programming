#include "main.h"

/**
 * main - printing number of arg with argc
 * @argc: argu var
 * @argv: argu var
 * Return: zero
 */
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
