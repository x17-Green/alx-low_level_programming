#include "main.h"
/**
 * _print_rev_recursion - main function for a reverse string
 * @s: pointer to the string vairable
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
