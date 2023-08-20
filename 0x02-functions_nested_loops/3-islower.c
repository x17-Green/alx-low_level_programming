#include "main.h"
/**
 * _islower - function to check lowercase
 * Return: 1 if lowecase or 0 if otherwise
 * @c: variable containing elements
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
