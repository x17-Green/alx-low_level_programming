#include "main.h"
/**
 * _isupper - main function
 *
 * @c: is an int
 *
 *
 * Return: always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
