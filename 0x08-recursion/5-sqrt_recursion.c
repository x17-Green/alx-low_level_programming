#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function to ruturn square root of a number
 * @n: integer to calculate
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - function to calculate natural square root
 * @n: integer to calculate square root
 * @i: iterate
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
