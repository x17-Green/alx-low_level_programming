#include "main.h"
/**
 * more_numbers - print number 0-14 ten times
 *
 * _putchar: return value
 *
 */
void more_numbers(void)
{
	int lines, num;

	for (lines = 1; lines <= 10; lines++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
