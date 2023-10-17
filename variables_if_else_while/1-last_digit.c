#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - n random each time executed to know if this is a positive, neg
 * ative or zero
 * Return: to sucess
 */
int main(void)
{
	int n;
	int last_digit = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit == 0)
	{
		printf("Last digit of %d is %d is 0\n", n, last_digit);
	}
	else if (last_digit > 5)
	{
		printf("Last digit of %d is %d is greater than 5\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
