/*
 * File: 104-fibonacci.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	unsigned long n1 = 0, n2 = 1, ans;
	unsigned long n1n1, n1n2, n2n1, n2n2;
	unsigned long nf1, nf2;

	for (num = 0; num < 92; num++)
	{
		ans = n1 + n2;
		printf("%lu, ", ans);

		n1 = n2;
		n2 = ans;
	}

	n1n1 = n1 / 10000000000;
	n2n1 = n2 / 10000000000;
	n1n2 = n1 % 10000000000;
	n2n2 = n2 % 10000000000;

	for (num = 93; num < 99; num++)
	{
		nf1 = n1n1 + n2n1;
		nf2 = n1n2 + n2n2;
		if (n1n2 + n2n2 > 9999999999)
		{
			nf1 += 1;
			nf2 %= 10000000000;
		}

		printf("%lu%lu", nf1, nf2);
		if (num != 98)
			printf(", ");

		n1n1 = n2n1;
		n1n2 = n2n2;
		n2n1 = nf1;
		n2n2 = nf2;
	}
	printf("\n");
	return (0);
}
