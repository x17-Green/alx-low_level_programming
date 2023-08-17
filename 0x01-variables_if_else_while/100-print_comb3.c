#include<stdio.h>
/**
 * main - main function
 * for statement carries number variable
 * for (2) makes the combinations work
 * putchar give the extra combinations and a new line
 * Return: always 0
 */

int main(void)
{
	int nm1, nm2;

	for (nm1 = 0; nm1 <= 9; nm1++)
	{
		for (nm2 = nm1 + 1; nm2 <= 9; nm2++)
		{
			putchar(nm1 + '0');
			putchar(nm2 + '0');

			if (nm1 < 8 || nm2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
