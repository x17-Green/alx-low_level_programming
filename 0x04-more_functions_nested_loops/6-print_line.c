#include "main.h"
/**
 * print_line - main function
 * @n: int variable
 * _putchar: to standard output
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
