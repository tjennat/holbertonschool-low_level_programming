#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *op = argv[2];


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(op, "/") || strcmp(op, "%")) && b == 0)
	{
		printf("Error\n");
		return (99);
	}
	if ((op[0] != '+') &
		(op[0] != '-') &
		(op[0] != '*') &
		(op[0] != '/') &
		(op[0] != '%'))
		{
		printf("Error\n");
		return (100);
		}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
