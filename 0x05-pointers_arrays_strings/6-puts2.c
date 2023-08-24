#include "main.h"
/**
 * puts2 - main function
 * @str: pointer array type
 * Description: print string, skipping the first word
 */
void puts2(char *str)
{
	int li;

	for (li = 0; str[li] != '\0'; li++)
	{
		if (li % 2 == 0)
		{
			_putchar(str[li]);
		}
	}
	_putchar('\n');
}
