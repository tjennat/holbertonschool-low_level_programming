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
	char lst[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit == 0)
	{
		printf("%s %d is %d and is 0\n", lst, n, last_digit);
	}
	else if (last_digit > 5)
	{
		printf("%s %d is %d and is greater than 5\n", lst, n, last_digit);
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", lst, n, last_digit);
	}
	return (0);
}
