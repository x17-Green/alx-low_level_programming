#include "main.h"
/**
 * print_triangle - Prints a triangle, using the character #
 * @size: number of sizes
 * Return: always 0
 */
void print_triangle(int size)
{
	int lines, trian;

	if (size > 0)
	{
		for (lines = 1; lines <= size; lines++)
		{
			for (trian = 1; trian <= size; trian++)
			{
				if (trian >= size - (lines - 1))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}

	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
