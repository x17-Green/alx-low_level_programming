#include "main.h"
/**
 * print_times_table - main function to print times table
 * @n: variable containing numbers
 */
void print_times_table(int n)
{
	int nr, mult, ans;

	if (n >= 0 && n <= 15)
	{
		for (nr = 0; nr <= n; nr++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				ans = nr * mult;
				if (ans <= 99)
				{
					_putchar(' ');
				}
				if (ans <= 9)
				{
					_putchar(' ');
				}
				if (ans >= 100)
				{
					_putchar((ans / 100) + '0');
					_putchar(((ans / 10)) % 10 + '0');
				}
				else if (ans <= 99 && ans >= 10)
				{
					_putchar((ans / 10) + '0');
				}
				_putchar((ans % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
