#include "main.h"
/*
 * print_tringle - prints triangle function
 * @size: number of sizes of triangle
 *
 */
void print_triangle(int size)
{
	int ln, tr;

	if (size > 0)
	{
		for (ln = 1; ln <= size; ln++)
		{
			for (tr = size - ln; tr > 0; tr--)
			{
				_putchar(' ');
			}
			for (tr = 0; tr < size; tr++)
			{
				_putchar('#');
			}
			if (ln == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
