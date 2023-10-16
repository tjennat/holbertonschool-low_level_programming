#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - n random each time executed to know if this is a positive, neg
 * ative or zero
 * Return: to sucess
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}


	return (0);
}
