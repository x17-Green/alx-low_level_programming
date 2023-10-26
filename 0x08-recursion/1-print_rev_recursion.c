#include "main.h"
/**
 * _print_rev_recursion - recursive function to print
 * a string in reverse order
 * @s: string pointer variable
 *
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
