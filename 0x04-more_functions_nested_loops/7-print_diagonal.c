#include "main.h"
/**
 * print_diagonal - main function
 * @n: int variable
 * _putchar: to standard output
 */
void print_diagonal(int n)
{
	int li, ch;

	li = 0;

	while (n > 0)
	{
		ch = li;
		while (ch > 0)
		{
			_putchar(' ');
			ch--;
		}
		_putchar('\\');
		_putchar('\n');
		li++;
		n--;
	}
	if (li < 1)
		_putchar('\n');
}
