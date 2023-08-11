#include<stdio.h>

/**
 * main - the main function
 * for: input numbers
 * Return: always 0
 * putchar: output new line numbers
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar("%d", n);
	}
	putchar("\n");
	return (0);
}
