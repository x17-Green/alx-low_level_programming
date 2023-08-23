#include "main.h"
/**
 * print_rev - main function to print reverse
 * @s: integer variable pointer
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		;
	}
	for (c--; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
