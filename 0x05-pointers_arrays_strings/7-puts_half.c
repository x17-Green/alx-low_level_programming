#include "main.h"
/**
 * puts_half - function to print half of a string
 * @str: character pointer to an array
 *
 */
void puts_half(char *str)
{
	int li;

	for (li = 0; str[li] != '\0'; li++)
	{
		;
	}
	li++;
	for (li /= 2; str[li] != '\0'; li++)
	{
		_putchar(str[li]);
	}
	_putchar('\n');
}
