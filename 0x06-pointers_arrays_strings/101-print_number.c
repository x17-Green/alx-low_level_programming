#include "main.h"
#include "stdio.h"
/**
 * print_number - main function to print an integer
 * @n: variable pointer
 * Return: always (0)
 */
void print_number(int n)
{
	int pw = 1, ng = 0, hd = n;

	if (n < 0)
	{
		_putchar('-');
		ng = 1;
	}
	while (hd > 9 || hd < -9)
	{
		pw *= 10;
		hd /= 10;
	}
	while (pw > 0)
	{
		if (pw > 9)
		{
			if (!ng)
			{
				_putchar((n / pw % 10) + '0');
			}
			else
			{
				_putchar((n / pw % 10) * -1 + '0');
			}
			pw /= 10;
		}
		if (pw == 1)
		{
			if (ng)
			{
				_putchar((n % 10) * -1 + '0');
			}
			else
			{
				_putchar(n % 10 + '0');
			}
			pw = 0;
		}
	}
}
