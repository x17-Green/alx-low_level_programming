#include<stdio.h>

/**
 * main - this is the main function
 * ch: variable
 * putchar: prints the conditions
 * Return: always 0
 */

int main(void)
{
	char ch = 'x';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	putchar('\n');
	return (0);
}
