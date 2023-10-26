#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function to return a prime number
 * @r: number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int r)
{
	return (check_prime(r, 1));
}
/**
 * check_prime - function to check a prime number
 * @r: integer to check
 * @i: iteration
 *
 * Return: 1 for a prime and 0 if other wise
 */
int check_prime(int r, int i)
{
	if (r <= 1)
	{
		return (0);
	}
	if (r % i == 0 && i > 1)
	{
		return (0);
	}
	if ((r / i) < i)
	{
		return (1);
	}
	return (check_prime(r, i + 1));
}
