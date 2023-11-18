#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - computes the sum of all the arguments passed to the function
 * @n: number of integers passed to the function as additional arguments
 * Return: the sum of all the integers passed to the function
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}
