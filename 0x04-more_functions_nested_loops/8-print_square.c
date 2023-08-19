#include "main.h"
/**
 * print_square - main function
 * _putchar: to standard output
 * @size: size of block
 */
void print_square(int size)
{
	int li, bx;

	if (size > 0)
	{
		for (li = 0; li < size; li++)
		{
			for (bx = 0; bx < size; bx++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
