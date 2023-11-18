#include "variadic_functions.h"
/**
 * print_numbers - prints numbers with a separator
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @ap: the variadic argument list
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, va_list ap)
{
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		int num = va_arg(ap, int);

		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}

/**
 * print_numbers - wrapper for print_numbers function
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	print_numbers(separator, n, args);
	va_end(args);
}
