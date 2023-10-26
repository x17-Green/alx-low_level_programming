#include "main.h"
/**
 * factorial - function to calculate the factorial
 * of a number
 * @r: integer to calculate a factorial
 *
 * Return: integer factorial
 */
int factorial(int r)
{
	if (r < 0)
	{
		return (-1);
	}
	if (r <= 1)
	{
		return (1);
	}
	return (r * factorial(r - 1));
}
