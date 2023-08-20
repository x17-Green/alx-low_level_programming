#include "main.h"
/**
 * print_last_digit - Last digit of initialized variable
 * @n: Variable containing digits
 *
 * Return: Last digits
 */
int print_last_digit(int n)
{
	int ls_d = n % 10;

	if (ls_d < 0)
	{
		ls_d *= -1;
	}
	_putchar(ls_d + '0');
	return (ls_d);
}
