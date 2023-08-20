#include "main.h"
/**
 * times_table - Print times table
 *
 */
void times_table(void)
{
	int nr, mul, ans;

	for (nr = 0; nr <= 9; nr++)
	{
		_putchar('0');
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			ans = nr * mul;
			if (ans <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((ans / 10) + '0');
			}
			_putchar((ans % 10) + '0');
		}
		_putchar('\n');
	}
}
