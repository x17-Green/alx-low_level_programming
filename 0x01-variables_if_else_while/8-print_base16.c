#include<stdio.h>

/**
 * main - the main function
 * for: takes decimal input
 * else: states io of hex
 * Return: always 0
 */

int main(void)
{
	int ch;

	for (ch = 0 ; ch < 16 ; ++ch)
		if (ch < 10)
		{
		putchar ('0' + ch);
		}
		else
		{
			putchar (ch - 10 + 'a');
		}
	putchar('\n');
	return (0);
}
