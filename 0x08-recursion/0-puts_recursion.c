#include "main.h"
/**
 * _puts_recursion - main function to print string
 * @s: pointer to a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
