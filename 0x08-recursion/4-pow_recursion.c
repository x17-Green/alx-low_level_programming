#include "main.h"
/**
 * _pow_recursion - Function to return x raised to the power of y
 * @x: number to multiply
 * @y: number of times to multiply the value
 *
 * Return: number of times multiplied
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
