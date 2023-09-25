#include "main.h"
/**
 * factorial - main function to return a factorial given number
 * @n: int type number
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		return (n + factorial(n - 1));
	}
}
