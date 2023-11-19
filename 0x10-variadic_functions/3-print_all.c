#include "variadic_functions.h"
/*
void print_char(char c)
{
	printf("%c", c);
}

void print_int(int n)
{
	printf("%d", n);
}

void print_float(float f)
{
	printf("%f", f);
}

void print_string(char *s)
{
	printf("%s", s);
}

/**
 * print_all - print strings with a separator, followed by a new line
 *
 * @format: the string containing the format of
 * arguments passed to the function
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr;
	char *separator;
	int i, j;

	separator = "";
	ptr = format;
	va_start(args, format);

	while (*ptr)
	{
		i = 0;
		j = 0;

		/*
		if (!*ptr && *ptr == '%')
		{
			printf("%c", *ptr);
			continue;
			ptr++;
		}
		*/

		while (j < 4 && (*(ptr + i) != '%'))
		{
			if (j < 4)
			{
				printf("%s", separator);
				separator = ", ";
			}
			break;
			j++;
		}
		i++;
		switch (*ptr)
		{
			case 'c':
				{
					char arg = (char) va_arg(args, int);

					printf("%c", arg);
					ptr++;
					break;
				}
			case 'i':
				{
					int arg = va_arg(args, int);

					printf("%d", arg);
					ptr++;
					break;
				}
			case 'f':
				{
					double arg = va_arg(args, double);

					printf("%f", arg);
					ptr++;
					break;
				}
			case 's':
				{
					char *arg = va_arg(args, char *);
					if (arg == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", arg);
					ptr++;
					break;
				}
			default: {
					 ptr++;
					 break;
				 }
		}
	}
	va_end(args);
	printf("\n");
}
