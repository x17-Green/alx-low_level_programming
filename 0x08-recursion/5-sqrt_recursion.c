#include "main.h"
/**
 * _sqrt_recursion - Function that
 * return the natural square root
 * @n: int vsriable
 * Return: -1 if no natural square root
 * else return natural square root
 */
int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}
/**
 * halp - helper function for _sqrt
 * @c: square root determinator
 * @i: compare with `c` using incrementer
 * Return: square root if natural, or -1 is not
 */
int halp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
	{
		return (i);
	}
	else if (square < c)
	{
		return (halp(c, i + 1));
	}
	else
	{
		return (-1);
	}
}
