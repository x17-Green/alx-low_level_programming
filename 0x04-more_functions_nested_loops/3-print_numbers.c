#include "main.h"
/**
 * print_numbers - main function
 *
 * _putchar: Standard output
 * Return: always 0
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
