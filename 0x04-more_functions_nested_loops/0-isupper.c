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
	char c;

	c = 'A';
	_isupper("%c:\n", c);
	c = 'a';
	_isupper("%c:\n", c);
	return (0);
}
