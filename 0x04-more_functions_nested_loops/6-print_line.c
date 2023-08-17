#include "main.h"
/**
 *
 *
 *
 */
void print_line(int n)
{
	if (n <= 2)
		n++;
	{
		_putchar('_');
	}
	else if (n <= 10)
		n++;
	{
		_putchar('_');
	}
	else
	{
		_putchar('\n');
	}
}
