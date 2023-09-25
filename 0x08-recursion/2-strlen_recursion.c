#include "main.h"
/**
 * _strlen_recursion - main function
 * to return lenght of string
 * @s: pointer containing string
 * Return: ch the string lenght
 */
int _strlen_recursion(char *s)
{
	int ch;

	ch = 0;
	if (*s == '\0')
	{
		return (0);
	}
	ch = 1 + _strlen_recursion(s + 1);
	return (ch);
}
