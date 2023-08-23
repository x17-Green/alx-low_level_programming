#include "main.h"
/**
 * _puts - main pointer function
 * @str: pointer variable
 */
void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
