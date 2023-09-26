#include "main.h"
/**
 * is_prime_number - main function to determine a prime number
 * @n: int variable
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n < 4)
	{
		return (1);
	}
	return (hai(n, 2));
}
/**
 * _sqrt - function to return square root number
 * @x: number variable
 * @i: number variable incrementer acting as divisor
 * Return: square root of `x`
 */
int _sqrt(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
	{
		return (i);
	}
	else
	{
		return (_sqrt(x, i + 1));
	}
}
/**
 * hai - helper function
 * @n: number given to original function is_prime_number
 * @d: increment divisor
 * Return: 0 if not prime, 1 if prime
 */
int hai(int n, int d)
{
	if (n % d == 0)
	{
		return (0);
	}
	else if (_sqrt(n, 1) < d)
	{
		return (1);
	}
	else
	{
		return (hai(n, d + 1));
	}
}
