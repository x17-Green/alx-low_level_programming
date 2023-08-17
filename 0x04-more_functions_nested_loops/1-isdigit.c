#include "main.h"
/**
 * _isdigit - main function
 *
 * @c: return 1 if num else 0
 *
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
