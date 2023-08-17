#include<stdio.h>

/**
 * main - this is the main function
 * ch: lowecase variable
 * chA: Uppercase variable
 * putchar: prints the conditions
 * Return: always 0
 */

int main(void)
{
	char ch = 'x';
	char chA = 'X';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (chA = 'A'; chA <= 'Z'; chA++)
	{
		putchar (chA);
	}
	putchar('\n');
	return (0);
}
