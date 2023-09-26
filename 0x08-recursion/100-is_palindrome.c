#include "main.h"
/**
 * is_palindrome - function to check if string is palindrome
 * @s: char pointer to array of strings
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;

	return (my_pal(s, --length));
}
/**
 * get_length - get the length of a string
 * @s: string pointer
 * Return: length of string
 */
int get_length(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (1 + get_length(++s));
	}
}
/**
 * my_pal - recursive check for palindrome
 * @s: char string pointer
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */
int my_pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
		{
			return (1);
		}
		else
		{
			return (my_pal(++s, l - 2));
		}
	}
	else
	{
		return (0);
	}
}
