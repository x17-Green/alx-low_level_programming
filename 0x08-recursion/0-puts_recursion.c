#include "main.h"
/**
 * _puts_recursion - recursive function to print a
 * string with a new line
 * @s: string
 *
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
