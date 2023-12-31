#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the main function
 * if the last digit of n is greater than 5, print is greater than 5
 * if the last digit of n 0, print is 0
 * if the last digit of n is less than 6, and not 0 print
 * Return: completes the project without errors
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
