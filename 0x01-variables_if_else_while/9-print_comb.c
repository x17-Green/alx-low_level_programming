#include<stdio.h>

/**
 * main - this is the main function
 * Description: print possible combinations of single digit number
 * '0' was used to force putchar to print integers
 * Possible combinations are "," and " "
 * Return: always 0
 */

int main(void)
{
	int nm;

	for (nm = 0; nm <= 9; nm++)
	{
		putchar('0' + nm);
		if (nm < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
