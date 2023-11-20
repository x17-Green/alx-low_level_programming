#ifndef _VARIADIC_FUNC
#define _VARIADIC_FUNC
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/*void print_numbers(const char *separator, const unsigned int n, va_list ap)*/

#endif
