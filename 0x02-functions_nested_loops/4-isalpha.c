#include "main.h"
/**
 * _isalpha - check for alphabet function
 * Return: 1 if alpha or 0 if otherwise
 * @c: variable to check
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
